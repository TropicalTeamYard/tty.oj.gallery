#include <iostream>									//��С������ 
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)								//շת����� 
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
