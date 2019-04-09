/*
@title:刷屏
@id:1674
@difficulty:3/5
@detail: 最优规划
@author: cht -ZJUT,2018
@descripiton: 刷屏这题有四条操作来支持，为了求出最短路线，需要有一种优化规律来支持。
每一步操作都可以归纳为xmi+mj的操作。操作步数为mi + 2 + mj(中间两步实际上就是全选和复制)。
又因为小于8后，无论怎么优化都是直接输最快，倍数为3时这个乘法和加法的系统时最优的（这个是数论中经常用到的结论）。
所以只要连续除3，并记录步数和余数的和，直到数字<9。
所以归纳后，步数公式为 num_last + mi_step * (3 + 2) + mj_total;
*/

#include<iostream>
using namespace std;
int main() 
{
	int test_num;
	cin >> test_num;
	for (int test_i = 0; test_i < test_num; test_i++)
	{
		int num;
		cin >> num;

		int steps = 0;
		int modl = 0;

		while (num >= 9)
		{
			modl += num % 3;
			num = num / 3;
			steps++;
		}

		int result = num + steps * 5 + modl;


		cout << result << endl;
	}

	return 0;
}