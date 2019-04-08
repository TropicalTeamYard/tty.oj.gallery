#include <iostream>					//À≥–Ú¡–
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n+10];
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);				//sort≈≈–Ú∫Û≈–∂œ≤Ó÷µ 
		int d=a[1]-a[0];
		for(i=2;i<n;i++)
		{
			if(a[i]-a[i-1]==d)
				continue;
			else
			{
				cout<<"no\n";
				break;
			}
		}
		if(i==n)
			cout<<"yes\n";
	}
}
