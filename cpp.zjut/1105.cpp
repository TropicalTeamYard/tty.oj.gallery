#include <iostream>						//ˮ�� 
#include <bits/stdc++.h>
using namespace std;
class fruit
{
	public:
		string name;
		string source;
		int num;
};
bool cmp(fruit a,fruit b)
{
	if(a.source!=b.source)
		return a.source<b.source;
	return a.name<b.name;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		fruit c[105];
		string title="";
		string breed="";
		int sum=0;
		int m;
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>c[i].name;
			cin>>c[i].source;
			cin>>c[i].num;
		}
		sort(c,c+m,cmp);												//ͨ��sort���Զ�������ʵ����ĿҪ�� 
		for(int i=0;i<m;i++)
		{
			if(title!=c[i].source)										//����������������һ��ˮ���������������¼��һ��ˮ��
			{
				title=c[i].source;
				if(i!=0)
					cout<<"|----"<<breed<<"("<<sum<<")"<<endl;
				cout<<title<<endl;
				breed=c[i].name;
				sum=0;
			}
			if(breed!=c[i].name && i!=0 || i==m-1)						//��ˮ�������������ϸ�ˮ������¼��ǰˮ�� 
			{
				if(i==m-1)
					sum+=c[i].num;
				cout<<"|----"<<breed<<"("<<sum<<")"<<endl;
				breed=c[i].name;
				sum=c[i].num;
			}
			else
			{
				sum+=c[i].num;
			}
		}
	} 
}
