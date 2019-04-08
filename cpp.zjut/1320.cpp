#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		double a[250000],max=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(a[i]-a[i-1]>max)
				max= a[i]-a[i-1];
		} 
		cout<<fixed<<setprecision(3)<<max<<endl;
	}
} 
