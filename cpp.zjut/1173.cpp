#include <iostream>								//��ʽ���ж�  		ˮ�� 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m=50;
	while(m--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				printf(" (%d,%d)",i,j);
			}
			cout<<endl;
		}
	}
}
