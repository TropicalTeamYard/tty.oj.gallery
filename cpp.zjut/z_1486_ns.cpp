#include<iostream>
using namespace std;

int main() 
{
	int num;
	while (cin >> num && num != 0)
	{
		int c = 54 % num;
		if (c == 0)
		{
			c = num;
		}

		cout << c << endl;
	}

	return 0;
}