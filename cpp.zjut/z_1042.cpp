/*
@title:求等差数列的和
@id:1042
@difficulty:0/5
@detail: 大水题
@author:wcf -ZJUT,2018
*/
#include<iostream>
using namespace std;

int main(){
	int f,l,d;

	while(cin>>f>>l>>d&&(f||l||d)){
		int sum=(f+l)*((l-f)/d+1)/2;
		cout<<sum<<endl;
	}
}