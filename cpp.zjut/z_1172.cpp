/*
@title:格式阵列1
@id:1172
@difficulty:1.0/5
@detail: 按格式输出即可 简单的二重循环 控制格式输出
*/
#include<iostream>
#include<iomanip>
using namespace std;	
int main() 
{
    int data[100];
    int test_num = 0;
    while (cin >> data[test_num++] && !cin.eof())
    {

    }

    //cin >> test_num;
    //for (int i = 0; i < test_num; i++)
    //{
    //	cin >> data[i];
    //}

    for (int test_i = 0; test_i < test_num; test_i++)
    {
        for (int i = 0; i < data[test_i]; i++)
        {
            cout << setw(2) << (i + 1) << "  ";

            for (int j = 0; j < data[test_i]; j++)
            {
                cout << setw(3) << (i + j) % data[test_i];
            }
            cout << endl;
        }

        if (test_i < test_num - 1)
        {
            cout << endl;
        }
    }

    return 0;
}