/*
@tips:1*2*...*(n-1)%n = n-1
*/


#include<iostream>
using namespace std;

bool is_openumber(int number) 
{
    if (number <= 1)
    {
        return false;
    }
    else
    {
        bool flag = true;
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                flag = false;
            }
        }

        return flag;
    }
}

int main() 
{
    int num;
    while (cin >> num && !cin.eof())
    {
        if (is_openumber(num))
        {
            cout << (num - 1) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}