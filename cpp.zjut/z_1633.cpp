#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() 
{
    int num;
    while (cin >> num && num != 0)
    {
        string * const arr_name = new string[num];
        int * const arr_count = new int[num];
        int arr_length = 0;
        //数据输入
        for (int i = 0; i < num; i++)
        {
            string c_name; int c_count;
            cin >> c_name >> c_count;

            bool flag = false;
            for (int j = 0; j < arr_length; j++)
            {
                if (arr_name[j] == c_name)
                {
                    arr_count[j] += c_count;
                    flag = true;
                    break;
                }
            }

            if (!flag)
            {
                arr_name[arr_length] = c_name;
                arr_count[arr_length] = c_count;
            
                arr_length++;
            }
        }
        //计算
        int * const arr_valid_index = new int[arr_length];

        int max = 0;
        for (int i = 1; i < arr_length; i++)
        {
            if (arr_count[i] > arr_count[max])
            {
                max = i;
            }
        }

        int max_count = arr_count[max];

        string * const arr_valid = new string[arr_length];
        int arr_valid_count = 0;
        for (int i = 0; i < arr_length; i++)
        {
            if (arr_count[i] == max_count)
            {
                arr_valid[arr_valid_count++] = arr_name[i];
            }
        }

        sort(arr_valid, arr_valid + arr_valid_count);

        for (int i = 0; i < arr_valid_count; i++)
        {
            cout << arr_valid[i] << endl;
        }

        cout << endl;
    }

    return 0;
}