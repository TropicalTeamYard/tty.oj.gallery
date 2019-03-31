#include<iostream>
using namespace std;

void set_minus(int *arr_a,int arr_a_length,int *arr_b,int arr_b_length, int* result, int* length)
{
    int _length = 0;
    for (int i = 0; i < arr_a_length; i++)
    {
        bool flag = true;
        for (int j = 0; j < arr_b_length; j++)
        {
            if (arr_a[i] == arr_b[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            result[_length++] = arr_a[i];
        }
    }

    *length = _length;
}

int main()
{
    int n, m;
    
    while (cin >> n >> m && n != 0 && m!=0)
    {
        int* arr_a = new int[n];
        int* arr_b = new int[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr_a[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> arr_b[j];
        }

        int *arr_result = new int[n];
        int re_length = 0;
        set_minus(arr_a, n, arr_b, m, arr_result, &re_length);
        sort(arr_result, arr_result + re_length);


        if (re_length == 0)
        {
            cout << "NULL" ;
        }
        else
        {
            for (int i = 0; i < re_length ; i++)
            {
                cout << arr_result[i] ;
                if (i< re_length - 1)
                {
                    cout << " ";
                }
            }
            
        }
        cout << endl;

        delete[] arr_a;
        delete[] arr_b;
        delete[] arr_result;
    }

    return 0;
}