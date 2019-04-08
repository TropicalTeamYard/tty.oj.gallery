#include <iostream>							//Tickets 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int k;
		cin>>k;
		int sum=0;
		int singl[k+10];
		int doubl[k+10];
		int save[k+10];
		int save_sum[k+10];
		int h,m,s;
		int flag=0;
		memset(save_sum,sizeof(save_sum),0);
		if(k==1)
		{
			cin>>s;
			m=s/60;
			s%=60;
			h=m/60+8;
			flag=h/12;
			h%=12;
			flag%=2;
			printf("%02d:%02d:%02d",h,m,s);
			if(flag)
				cout<<" pm\n";
			else
				cout<<" am\n";
			continue; 
		} 
		for(int i=0;i<k;i++)				//计算优化时间前时间和 
		{
			cin>>singl[i];
			sum+=singl[i];
		}
		for(int i=0;i<k-1;i++)
		{
			cin>>doubl[i];
			save[i]=singl[i]+singl[i+1]-doubl[i]; 	//计算每两人间可节省时间 
		}
		cout<<endl;
		save_sum[0]=save[0];
		save_sum[1]=save[1];
		save_sum[2]=save[0]+save[1]+save[2];
		for(int i=3;i<k-1;i++)						//对每个对取其最优值，动态规划思想 
		{
			save_sum[i]=max(save_sum[i-2]+save[i],save_sum[i-3]+save[i]);
			cout<<"save_sum["<<i<<"]"<<" = "<<save_sum[i]<<endl;
		}
		s=sum-max(save_sum[k-2],save_sum[k-3]);
		m=s/60;
		s%=60;
		h=m/60+8;
		flag=h/12;
		h%=12;
		flag%=2;
		printf("%02d %02d %02d",h,m,s);
		if(flag)
			cout<<" pm\n";
		else
			cout<<" am\n";
	}
}
