#include <iostream>							//级数求和		水题 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t=55;
	while(t--)
	{
		double x;
		double sum=1;
		double count=1;
		double jc=1;
		cin>>x;
		while((pow(x,count)/jc)>=pow(10,-6))
		{
			sum+=pow(-1,count+1)*(pow(x,count)/jc);
			count++;
			jc*=count; 
		}
		printf("x=%.6f, sum=%.6f\n",x,sum);
	}
	
}
