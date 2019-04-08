#include <iostream>						//整数内码 
#include  <bits/stdc++.h>
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
		if(n>=0)						//string 处理二进制码 
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
			for(int i=1;i<=32-two.length();i++)
				two="0"+two;
		}
		else
		{
			m=-n-1;
			while(m!=0)
			{
				if(m%2==0)
				{
					two="1"+two;
					m/=2;
				}
				else
				{
					two="0"+two;
					m/=2;
				}
			}
			for(int i=1;i<=32-two.length();i++)
				two="1"+two;
		}
		cout<<two<<"  "<<n<<endl;
	}
}
