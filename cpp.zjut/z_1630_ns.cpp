#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int periodlong;
        cin >> periodlong;
        cout << setiosflags(ios::fixed) << setprecision(2);
        if (periodlong <= 10)
        {
            cout  << 1.0;
        }
        else 
        {
            cout <<  1 + (periodlong - 10) * 0.15;
        }

        cout << endl;
    }

    return 0;
}