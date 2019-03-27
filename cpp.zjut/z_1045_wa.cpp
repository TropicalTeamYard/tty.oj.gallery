/*
@title:按日期排序
@id:1045
@difficulty:0.5/5
@detail: 排序
@author:wcf -ZJUT,2018
*/

#include<iostream>
#include<cstring>
using namespace std;

int str_cmp(char *a,char *b){
	for(int i=0;*(a+i)!='\0';i++){
		if(*(a+i)>*(b+i)){
			return 1;
		}else if(*(a+i)<*(b+i)){
			return -1; 
		}
	}
	return 0;
}

int cmp(char *a,char * b){
	a[2]='\0';a[5]='\0';
	b[2]='\0';b[5]='\0';
	int i=0;
	if(str_cmp(a+6,b+6)){
		i = str_cmp(a+6,a+6);
	}else{
		if(str_cmp(a+3,b+3)){
			i = str_cmp(a+3,b+3);
		}else{
			if(str_cmp(a,b)){
				i = str_cmp(a,b);
			}else{
				i = 0;
			}
		}
	}
	a[2]='/';a[5]='/';
	b[2]='/';b[5]='/';
	return i;
}

int main(){
	int y[1000],m[1000],d[1000];
	int i=0,min;
	char t,a[1000][20];
	while(cin>>a[i]){
		i++;
	}
	for(int j=0;j<i;j++){
		min=j;
		for(int k=j+1;k<i;k++){
			if(cmp(a[min],a[k])>0) min=k;
		}
		char tmp[20];
		strcpy(tmp,a[j]);
		strcpy(a[j],a[min]);
		strcpy(a[min],tmp);
	}
	for(int j=0;j<i;j++){
		cout<<a[j]<<endl;
	}
}