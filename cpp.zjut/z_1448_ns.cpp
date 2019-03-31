#include<iostream>
using namespace std;

int main() 
{
    int test_num;
    cin >> test_num;
    for (int test_i = 0; test_i < test_num; test_i++)
    {
        int row, column, teslap;
        cin >> row >> column >> teslap;

        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= column; j++)
            {
                int temp_re = ((i* j) % teslap) % 2;
                cout << temp_re;
            }
            if (i < row)
            {
                cout << endl;
            }
        }

        if (test_i < test_num-1)
        {
            cout << endl << endl;
        }
    }

    return 0;
}