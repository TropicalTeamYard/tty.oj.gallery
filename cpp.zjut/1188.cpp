#include <iostream>						//ͳ������ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num=0;
	char date[50];
	while(gets(date))					//����char�ַ�����gets����������ո���ַ��� 
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
