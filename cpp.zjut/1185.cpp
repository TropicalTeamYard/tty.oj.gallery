#include <iostream>						//十->二进制 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t=55;
	while(t--)
	{
		int n;
		int m;
		string two="";
		cin>>n;
		if(n>0)						//string 处理二进制 
		{
			m=n;
			while(m!=0)
			{
				if(m%2==0)
				{
					two="0"+two;
					m/=2;
				}
				else
				{
					two="1"+two;
					m/=2;
				}
			}
		}
		else if(n<0)
		{
			m=-n;
			while(m!=0)
			{
				if(m%2==0)
				{
					two="0"+two;
					m/=2;
				}
				else
				{
					two="1"+two;
					m/=2;
				}
			}
			two="-"+two;
		}
		else
			two="0";
		printf("%11d-->%s\n",n,two.c_str());
	} 
}
