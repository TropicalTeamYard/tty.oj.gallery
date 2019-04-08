#include <iostream>									//×Ö·ûÀâĞÎ
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t=55;
	while(t--)
	{
		int n;
		char ch;
		cin>>ch>>n;
		for(int i=0;i<n;i++)						//Ë®Ìâ 
		{
			cout<<string(n-1-i,' ')<<string(i*2+1,ch)<<endl;
		}
		for(int i=n-2;i>=0;i--)
		{
			cout<<string(n-1-i,' ')<<string(i*2+1,ch)<<endl;
		}
	}
}
