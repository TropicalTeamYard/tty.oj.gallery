#include <iostream>										//杨辉三角 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t=55;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<string((n-i-1)*3,' ');				//按需输出空格 
			for(int j=0;j<=i;j++)
			{
				int num,fenmu=1,fenzi=1;
				if(j==0)								//当C0x 时独立计算 
					num=1;
				else									//按公式计算 
				{
					for(int k=1;k<=j;k++)
					{
						fenzi*=(i+1-k);
						fenmu*=k;
					}
					num=fenzi/fenmu;
				}
				printf("%3d   ",num);					//每个数字占三格后有三空格 
			}
			cout<<endl;
		}
	}
} 
