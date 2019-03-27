/*
@title:可排列相等
@id:1037
@difficulty:0.5/5
@detail: 排序
@author:wcf -ZJUT,2018
*/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	char a[1000],b[1000];
	do{
		gets_s(a);gets_s(b);
		sort(a,a+strlen(a));
		sort(b,b+strlen(b));
		//cout<<a<<endl;
		//cout<<b<<endl;
		if(strcmp(a,b)){
			cout<<"no"<<endl;
		} else {
			cout<<"yes"<<endl;
		}
		//cout<<strcmp(a,b)<<endl;
	}while(gets_s(a));
}