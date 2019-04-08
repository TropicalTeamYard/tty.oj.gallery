#include <iostream>									//最小公倍数 
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)								//辗转相除法 
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	int t=55;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<a*b/gcd(a,b)<<endl; 
	} 
}
