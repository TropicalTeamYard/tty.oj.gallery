#include <iostream>							//������  math ����д�����ʽ���� 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int t,sum=0;
		cin>>t;
		int a[t+10];
		for(int i=0;i<t;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
//		cout<<"sum="<<sum<<endl;
		double ave,S=0;
		ave=sum*1.0/t*1.0;
		for(int i=0;i<t;i++)
		{
			S+=(a[i]-ave)*(a[i]-ave);
		}
		cout<<fixed<<setprecision(5)<<sqrt(S/t)<<endl;
	}
} 
