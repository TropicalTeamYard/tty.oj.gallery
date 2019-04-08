#include<stdio.h>							//1317 掷飞盘 
#include<iostream>							//高斯消元 概率dp 
#include<algorithm>
#include<string.h>
#include<queue>
#include<math.h>
#define eps 1e-9
using namespace std;
const int MAXN=200;
double a[MAXN][MAXN],x[MAXN];				//方程的左边的矩阵和等式右边的值，求解之后x存的就是结果
int equ,var;								//方程数和未知数个数
int Gauss()									//模板 
{
    int i,j,k,col,max_r;					//k记录处理行 col记录处理列 max_r记录某列最大值所在行 
    for(k=0,col=0;k<equ && col<var;k++,col++)
    {
        max_r=k;							//列最大值所在行初始化 
        for(i=k+1;i<equ;i++)
          	if(fabs(a[i][col])>fabs(a[max_r][col]))
            	max_r=i;
        if(fabs(a[max_r][col])<eps)			//如果该列元素全为零 即该矩阵为0矩阵 返回0 
			return 0;
        if(k!=max_r)						//如果k指向的行不是列最大值所在行 
        {
            for(j=col;j<var;j++)			//则交换 
              	swap(a[k][j],a[max_r][j]);	//左边系数交换 
            swap(x[k],x[max_r]);			//右边常数交换 
        }
        x[k]/=a[k][col];					//因为行固定了 右边常数通过除去系数可以确定 
        for(j=col+1;j<var;j++)				//行各元素除以列最大元素的值 即将列最大元素化为1 
			a[k][j]/=a[k][col];
        a[k][col]=1;						//列最大元素化为1 
        for(i=0;i<equ;i++)					//下面每行的各个元素依次减去主列元素乘以比例 
          	if(i!=k)						//除了主列自身 (已经完成化简) 
          	{
              	x[i]-=x[k]*a[i][k];			//由于最大列元素已经化为1 a[i][k]即当前处理行的所处理列的元素即他们之间的比例 
              	for(j=col+1;j<var;j++)
				  	a[i][j]-=a[k][j]*a[i][col];		//道理同上 
              	a[i][col]=0;				//处理列的元素化0 
          	}
    }
    return 1;
}

int n,m;								//储存输入数据 以及规范化后的数据 
int num[MAXN];							//用于记录所有位置的可能性 
int cnt;								//记录未知数的数量 
int getnum(int x)						//获得合法的m的函数 
{
    x=(x%n+n)%n;						//若x大于n则取余 若x小于0则加n 
    if(2*x>n)							//若大于n的一半 则取差			
		x=n-x;
    return x;
}
void dfs(int x)
{
    x=getnum(x);						//对每次读入的数据进行规范化 
    num[x]=cnt++;
    int y=getnum(x+2);					//对E[x+2]的情况考虑 
    if(num[y]==-1)
		dfs(y);
    y=getnum(x-2);						//对E[x-2]的情况考虑 
    if(num[y]==-1)
		dfs(y);
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(num,-1,sizeof(num));				//初始化位置 
        cnt=0;									//初始化未知数数量 
        m=getnum(m);							//规范化m 
        dfs(m);									//m为初始情况 E[m] 对子项的可能性进行记录 
        if(num[0]==-1)							//判断目标情况 E[0] 是否能够达到 
        {
            printf("INF\n");
            continue;
        }
        memset(a,0,sizeof(a));					//初始化矩阵 
        memset(x,0,sizeof(x));
        for(int i=0;i<n;i++)					//对n个位置进行枚举 
          	if(num[i]!=-1)						//对能达到的位置列一条方程 
          	{
              	int now=num[i];					//记录当前方程序号和当前未知数的序号 
              	a[now][now]=2;					//第now个未知数的系数 即 2*E[i] 
              	x[now]=4;						//等式右边的数 
              	int t=getnum(i-2);				//E[i-2] 
              	a[now][num[t]]-=1;				//这里一定要注意的，要减1，不能直接赋值为-1，因为i-2和i+2是可能一样的
              	t=getnum(i+2);					//E[i+2]
              	a[now][num[t]]-=1;
          	}									//构建了cnt-1条方程 共cnt个未知数 (n=0时不成立)    2*E[i]-E[i+2]-E[i-2]=4 
        int t=num[0];							//<
        memset(a[t],0,sizeof(a[t]));			//E[0]=0	最后一条方程			
        a[t][t]=1;	
        x[t]=0;									//>
        equ=var=cnt;							//这个不要忘记了，经常忘掉！
        if(Gauss())								//高斯消元 
			printf("%.2lf\n",x[num[m]]);
        else
			printf("INF\n");
	}		                                 
	return 0;                            
}
