#include <iostream>								//��λ���ڶԳ����� 
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
		if(strlen(num)>5)							//�ж��Ƿ������λ 
			cout<<"No\n";
		else
		{
			reverse(num,num+strlen(num));
			if(strcmp(num,mirror))					//�ж��Ƿ�Ϊ�Գ��� 
				cout<<"No\n";
			else
			{
				if(judge(mirror))					//�ж��Ƿ�Ϊ���� 
					cout<<"Yes\n";
				else
					cout<<"No\n";
			} 
		}
	}
} 
