#include <iostream>							//ĸţ���� 
#include <bits/stdc++.h>
using namespace std;
int cow(int a)								//�򵥵ݹ� 
{
	if(a<4)
		return 1;
	return cow(a-1)+cow(a-3);
}
int main()
{
	int t=55;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<cow(n)<<endl; 
	}
}
