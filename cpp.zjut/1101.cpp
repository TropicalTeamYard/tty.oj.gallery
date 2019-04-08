#include <iostream>							//神奇的卡片 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
		int pos=2;
		while(m--)
		{
			int a,b;
			cin>>a>>b;
			if(a==pos)						//判断每次与J有关的交换并记录J换到哪个位置即可 
			{
				pos=b;
			}
			else if(b==pos)
			{
				pos=a;
			}
			else
				continue;
		}
		cout<<pos<<endl;
	}
}

