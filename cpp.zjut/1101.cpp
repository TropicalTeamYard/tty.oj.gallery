#include <iostream>							//����Ŀ�Ƭ 
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
			if(a==pos)						//�ж�ÿ����J�йصĽ�������¼J�����ĸ�λ�ü��� 
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

