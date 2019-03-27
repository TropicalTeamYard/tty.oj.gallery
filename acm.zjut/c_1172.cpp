#include<iostream>
//#include<sstream>
#include<cmath>
using namespace std;

typedef long long ld;

void c_1172_operate(ld *data,int datalength,int *inputdata) 
{
	int cmd = inputdata[0];
	int x = inputdata[1];
	int y = inputdata[2];
	int u = inputdata[3];
	if (cmd == 1)
	{
		for (int i = x; i <= y; i++)
		{
			data[i] += u;
		}
	}
	else if (cmd == 2)
	{
		for (int i = x; i <= y; i++)
		{
			data[i] *= u;
		}
	}
	else if (cmd == 3)
	{
		for (int i = x; i <=y; i++)
		{
			data[i] = u;
		}
	}
	else
	{
		ld sum = 0;
		for (int i = x; i <= y; i++)
		{
			sum += (ld)(pow(data[i], u)) ;
		}
		cout << sum % 10007 << endl;
	}
}

int main() 
{
	ld *data = NULL;
	int datalength = 0;

	int n, m;
	while (cin >> n >> m && !(n==0 && m==0))
	{
		if (data != NULL)
		{
			delete[] data;
		}
		data = new ld[n] {0};

		for (int i = 0; i < m; i++)
		{
			int inputdata[4];
			for (int j = 0; j < 4; j++)
			{
				cin >> inputdata[j];
			}
			c_1172_operate(data, datalength, inputdata);
		}
	}

	//if (data != NULL)
	//{
	//	delete[] data;
	//}

	return 0;
}