/*
@title:字母转换
@id:1047
@difficulty:0.5/5
@detail: 水题
@author:wcf -ZJUT,2018
*/
#include<iostream>
using namespace std;

int main(){
	char a[1000];
	while(gets_s(a)){
		for(int i=0;a[i]!='\0';i++){
			if(a[i]>='a'&&a[i]<='z'){
				cout<<char(a[i]-32);
			}else if(a[i]>='A'&&a[i]<='Z'){
				cout<<char(a[i]+32);
			}else{
				cout<<a[i];
			}
		}
		cout<<endl; 
	}
}