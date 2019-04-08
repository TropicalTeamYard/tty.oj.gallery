#include<stdio.h>							//1317 ������ 
#include<iostream>							//��˹��Ԫ ����dp 
#include<algorithm>
#include<string.h>
#include<queue>
#include<math.h>
#define eps 1e-9
using namespace std;
const int MAXN=200;
double a[MAXN][MAXN],x[MAXN];				//���̵���ߵľ���͵�ʽ�ұߵ�ֵ�����֮��x��ľ��ǽ��
int equ,var;								//��������δ֪������
int Gauss()									//ģ�� 
{
    int i,j,k,col,max_r;					//k��¼������ col��¼������ max_r��¼ĳ�����ֵ������ 
    for(k=0,col=0;k<equ && col<var;k++,col++)
    {
        max_r=k;							//�����ֵ�����г�ʼ�� 
        for(i=k+1;i<equ;i++)
          	if(fabs(a[i][col])>fabs(a[max_r][col]))
            	max_r=i;
        if(fabs(a[max_r][col])<eps)			//�������Ԫ��ȫΪ�� ���þ���Ϊ0���� ����0 
			return 0;
        if(k!=max_r)						//���kָ����в��������ֵ������ 
        {
            for(j=col;j<var;j++)			//�򽻻� 
              	swap(a[k][j],a[max_r][j]);	//���ϵ������ 
            swap(x[k],x[max_r]);			//�ұ߳������� 
        }
        x[k]/=a[k][col];					//��Ϊ�й̶��� �ұ߳���ͨ����ȥϵ������ȷ�� 
        for(j=col+1;j<var;j++)				//�и�Ԫ�س��������Ԫ�ص�ֵ ���������Ԫ�ػ�Ϊ1 
			a[k][j]/=a[k][col];
        a[k][col]=1;						//�����Ԫ�ػ�Ϊ1 
        for(i=0;i<equ;i++)					//����ÿ�еĸ���Ԫ�����μ�ȥ����Ԫ�س��Ա��� 
          	if(i!=k)						//������������ (�Ѿ���ɻ���) 
          	{
              	x[i]-=x[k]*a[i][k];			//���������Ԫ���Ѿ���Ϊ1 a[i][k]����ǰ�����е��������е�Ԫ�ؼ�����֮��ı��� 
              	for(j=col+1;j<var;j++)
				  	a[i][j]-=a[k][j]*a[i][col];		//����ͬ�� 
              	a[i][col]=0;				//�����е�Ԫ�ػ�0 
          	}
    }
    return 1;
}

int n,m;								//������������ �Լ��淶��������� 
int num[MAXN];							//���ڼ�¼����λ�õĿ����� 
int cnt;								//��¼δ֪�������� 
int getnum(int x)						//��úϷ���m�ĺ��� 
{
    x=(x%n+n)%n;						//��x����n��ȡ�� ��xС��0���n 
    if(2*x>n)							//������n��һ�� ��ȡ��			
		x=n-x;
    return x;
}
void dfs(int x)
{
    x=getnum(x);						//��ÿ�ζ�������ݽ��й淶�� 
    num[x]=cnt++;
    int y=getnum(x+2);					//��E[x+2]��������� 
    if(num[y]==-1)
		dfs(y);
    y=getnum(x-2);						//��E[x-2]��������� 
    if(num[y]==-1)
		dfs(y);
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(num,-1,sizeof(num));				//��ʼ��λ�� 
        cnt=0;									//��ʼ��δ֪������ 
        m=getnum(m);							//�淶��m 
        dfs(m);									//mΪ��ʼ��� E[m] ������Ŀ����Խ��м�¼ 
        if(num[0]==-1)							//�ж�Ŀ����� E[0] �Ƿ��ܹ��ﵽ 
        {
            printf("INF\n");
            continue;
        }
        memset(a,0,sizeof(a));					//��ʼ������ 
        memset(x,0,sizeof(x));
        for(int i=0;i<n;i++)					//��n��λ�ý���ö�� 
          	if(num[i]!=-1)						//���ܴﵽ��λ����һ������ 
          	{
              	int now=num[i];					//��¼��ǰ������ź͵�ǰδ֪������� 
              	a[now][now]=2;					//��now��δ֪����ϵ�� �� 2*E[i] 
              	x[now]=4;						//��ʽ�ұߵ��� 
              	int t=getnum(i-2);				//E[i-2] 
              	a[now][num[t]]-=1;				//����һ��Ҫע��ģ�Ҫ��1������ֱ�Ӹ�ֵΪ-1����Ϊi-2��i+2�ǿ���һ����
              	t=getnum(i+2);					//E[i+2]
              	a[now][num[t]]-=1;
          	}									//������cnt-1������ ��cnt��δ֪�� (n=0ʱ������)    2*E[i]-E[i+2]-E[i-2]=4 
        int t=num[0];							//<
        memset(a[t],0,sizeof(a[t]));			//E[0]=0	���һ������			
        a[t][t]=1;	
        x[t]=0;									//>
        equ=var=cnt;							//�����Ҫ�����ˣ�����������
        if(Gauss())								//��˹��Ԫ 
			printf("%.2lf\n",x[num[m]]);
        else
			printf("INF\n");
	}		                                 
	return 0;                            
}
