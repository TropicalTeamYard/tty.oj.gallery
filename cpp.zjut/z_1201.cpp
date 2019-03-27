/*
@title:组合数
@id:1201
@difficulty:1.0/5
@detail: 无限输入，简单的循环。
@description:计算一组数的组合数
@author:cht -ZJUT,2018
*/

#include<iostream>
using namespace std;
int main() 
{
    int m, n;
    //无限流输入的模式。
    while (cin >> m >> n)
    {
        if (n > m / 2)
            n = m - n;
        int result_t = 1;
        //计算组合数 C = m! / (n!*(m-n)!)
        for (int i = 0; i < n; i++)
        {
            result_t = result_t * (m-i) / (1+i);
        }

        cout << result_t << endl;
    }


    return 0;
}

#include<iostream>
#include<string>
#include<sstream>

using namespace std;	

//辗转相除法
	int get_max_el(int a,int b) 
	{
		if (a < b)
		{
			int t = a;
			a = b;
			b = t;
		}
		if (b != 0)
		{
			return get_max_el(b, a%b);
		}
		else
		{
			return a;
		}
	}

	int main()
	{
		string line;
		while (getline(cin,line))
		{
			istringstream istr(line);
			int arr[100]; int arr_num = 0;
			while (istr >> arr[arr_num++] && !istr.eof())
			{
			
			}

			int t_num = 0;
			for (int i = 0; i < arr_num - 1; i++)
			{
				for (int j = i+1; j < arr_num; j++)
				{
					if (get_max_el(arr[i],arr[j]) ==1)
					{
						t_num ++;
					}
				}
			}

			cout << t_num << endl;

		}


		return 0;
	}