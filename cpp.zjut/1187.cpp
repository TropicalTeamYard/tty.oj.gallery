#include <iostream>								//五位以内对称素数 
#include <bits/stdc++.h>
using namespace std;
int judge(char* a)
{
	int num=0;
	for(int i=strlen(a)-1;i>=0;i--)
	{
		num*=10;
		num+=a[i]-'0';
	}
	if(num==2)
		return 1;
	if(num==1)
		return 0;
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
			return 0; 
	}
	return 1;
} 
int main()
{
	int t=55;
	while(t--)
	{
		char mirror[500],num[500];
		cin>>num;
		strcpy(mirror,num);
		if(strlen(num)>5)							//判断是否大于五位 
			cout<<"No\n";
		else
		{
			reverse(num,num+strlen(num));
			if(strcmp(num,mirror))					//判断是否为对称数 
				cout<<"No\n";
			else
			{
				if(judge(mirror))					//判断是否为素数 
					cout<<"Yes\n";
				else
					cout<<"No\n";
			} 
		}
	}
} 
