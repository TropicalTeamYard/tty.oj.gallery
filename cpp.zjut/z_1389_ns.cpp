#include<iostream>
using namespace std;

int main()
{
    int test_num;
    cin >> test_num;
    for (int test_i = 0; test_i < test_num; test_i++)
    {
        int number;
        cin >> number;
        
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                cout << i;
            }
        }
        cout << endl;

    }


    return 0;
}