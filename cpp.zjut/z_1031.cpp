/*
@title:对称串
@id:1031
@difficulty:1.0/5
@detail: 简单的多重循环。
@author:wcf -ZJUT,2018
*/
#include<cstring>
#include<iostream>
using namespace std;

int isR(char a[]){
	for(int i=0;i<strlen(a)/2;i++){
		if(a[i]!=a[strlen(a)-i-1]){
			return 0;
        }
	}
	return 1;
}

int main(){
	char a[1000][1000];
	int i=0;
	while(cin>>a[i++]);
	i--;

	int min;
	for(int j=0;j<i;j++){
		min=j;
		for(int k=j+1;k<i;k++){
			if(strlen(a[min])>strlen(a[k])) min=k;
		}
		//swap(a[j],a[min]);
		char t[1000];
		strcpy(t,a[j]);
		strcpy(a[j],a[min]);
		strcpy(a[min],t);
	}

	for(int j=0;j<i;j++){
		if(isR(a[j])){
			cout<<a[j]<<endl;
		}
	}

}