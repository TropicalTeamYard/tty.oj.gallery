/*
@title:计算矩形面积
@id:1053
@difficulty:0/5
@detail: 套用公式即可
@author:wcf -ZJUT,2018
*/

#include<iostream> 
#include<algorithm>
using namespace std;

int main(){
	int x0,y0,x1,y1,s[1000],i=0;
	while(cin>>x0>>y0>>x1>>y1){
		s[i]=abs((x0-x1)*(y0-y1));
		i++;
	}
	sort(s,s+i);
	for(int j=0;j<i;j++){
		cout<<s[j]<<endl;
	}
}