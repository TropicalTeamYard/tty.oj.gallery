#include<iostream>
using namespace std;

int main() 
{
    int num;
    bool firstline = true;
    while (cin >> num && num!=0)
    {
        if (firstline)
        {
            firstline = !firstline;
        }
        else
        {
            cout << endl << endl;
        }

        for (int i = num - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout << ' ';
            }
            for (int j = 0; j < 2 * (num - i) -1; j++)
            {
                cout << (char)('A' + (num - i - 1));
            }
            if (i>0)
            {
                cout << endl;
            }
        }
        
    }
    cout << endl;
    return 0;
}