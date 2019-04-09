#include<iostream>
using namespace std;

int main() 
{
    int num;
    while (cin >> num && !cin.eof())
    {
        if (num % 2 == 0)
        {
            for (int i = 0; i < num /2; i++)
            {
                cout << '1';
            }
            cout << endl;
        }
        else
        {
            cout << '7';
            for (int i = 0; i < num / 2 -1; i++)
            {
                cout << '1';
            }
            cout << endl;
        }
    }

    return 0;
}