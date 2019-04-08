#include <iostream>								//Max interval
#include <bits/stdc++.h>
using namespace std;
int n;
int a[25][25],l[25][25],exitt[25];				//l记录元素之间的关系 exitt记录元素配对情况 
int find(int i,int count)
{
//	cout<<"第"<<i+1<<"层"<<":\n";
	if(exitt[i]==1)								//如果i已经搭配
	{
		return find(i+1,count); 				//则进入下一层
	}
	for(int j=i+1;j<n;j++)						//对该层元素逐个判断
	{
//		cout<<"      第"<<i+1<<"层"<<" 第"<<j<<"个:\n";
		if(i==0)								//如果目前是第一层则清空配对情况
		{
			memset(exitt,0,sizeof(exitt));
			count=0;
//			cout<<"clear\n"; 
		}
		if(l[i][j]==1 && !exitt[j])							//如果该位置符合条件 而且  j没有被搭配  (同时i也没有被搭配) 
		{
//			cout<<"配对i="<<i+1<<" j="<<j+1<<endl;
			exitt[i]=1;							//i被配对 
			exitt[j]=1;							//j被配对 
			count++;							//配对数加一
			if(count==n/2)						//如果配对完毕 
				return 1;						//返回1
			int ans=find(i+1,count);
//			cout<<"ans:"<<ans<<endl;
			if(ans)								//进入下一层
				return 1;
		}
//		cout<<"###########"<<endl;
	}
//	cout<<"Not found\n";
	return 0;									//若执行完循环即对一层中所有元素遍历结束后仍无结果 代表该层无结果返回第一层 
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
