#include <iostream>										//������� 
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
			cout<<string((n-i-1)*3,' ');				//��������ո� 
			for(int j=0;j<=i;j++)
			{
				int num,fenmu=1,fenzi=1;
				if(j==0)								//��C0x ʱ�������� 
					num=1;
				else									//����ʽ���� 
				{
					for(int k=1;k<=j;k++)
					{
						fenzi*=(i+1-k);
						fenmu*=k;
					}
					num=fenzi/fenmu;
				}
				printf("%3d   ",num);					//ÿ������ռ����������ո� 
			}
			cout<<endl;
		}
	}
} 
