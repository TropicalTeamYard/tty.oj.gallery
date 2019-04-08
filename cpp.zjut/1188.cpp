#include <iostream>						//统计天数 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num=0;
	char date[50];
	while(gets(date))					//利用char字符数组gets操作输入带空格的字符串 
	{
		if(date[5]=='2' && date[6]=='5')
		{
			if(date[12]=='*')
				num+=2;
			else
				num++;
		}
	}
	cout<<num<<endl;;
} 
