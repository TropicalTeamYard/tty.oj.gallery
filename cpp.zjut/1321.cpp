#include <iostream>								//Max interval
#include <bits/stdc++.h>
using namespace std;
int n;
int a[25][25],l[25][25],exitt[25];				//l��¼Ԫ��֮��Ĺ�ϵ exitt��¼Ԫ�������� 
int find(int i,int count)
{
//	cout<<"��"<<i+1<<"��"<<":\n";
	if(exitt[i]==1)								//���i�Ѿ�����
	{
		return find(i+1,count); 				//�������һ��
	}
	for(int j=i+1;j<n;j++)						//�Ըò�Ԫ������ж�
	{
//		cout<<"      ��"<<i+1<<"��"<<" ��"<<j<<"��:\n";
		if(i==0)								//���Ŀǰ�ǵ�һ�������������
		{
			memset(exitt,0,sizeof(exitt));
			count=0;
//			cout<<"clear\n"; 
		}
		if(l[i][j]==1 && !exitt[j])							//�����λ�÷������� ����  jû�б�����  (ͬʱiҲû�б�����) 
		{
//			cout<<"���i="<<i+1<<" j="<<j+1<<endl;
			exitt[i]=1;							//i����� 
			exitt[j]=1;							//j����� 
			count++;							//�������һ
			if(count==n/2)						//��������� 
				return 1;						//����1
			int ans=find(i+1,count);
//			cout<<"ans:"<<ans<<endl;
			if(ans)								//������һ��
				return 1;
		}
//		cout<<"###########"<<endl;
	}
//	cout<<"Not found\n";
	return 0;									//��ִ����ѭ������һ��������Ԫ�ر������������޽�� ����ò��޽�����ص�һ�� 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		memset(l,0,sizeof(l));
		memset(a,0,sizeof(a));
		memset(exitt,0,sizeof(exitt));
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i][j]==1 && a[j][i]==1)
				{
					l[i][j]=1;
				}
			}
		}
		int flag;
		flag=find(0,0);
		if(flag)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
} 
