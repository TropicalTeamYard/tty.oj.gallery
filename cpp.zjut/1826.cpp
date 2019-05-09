#include<iostream>
using namespace std;
int main() 
{
    int a, b;
    while (cin >> a >> b && !cin.eof())
    {
        int big = b * (b + 1) * (2 * b + 1) / 6;
        a--;
        int small = (a == 0 ? 0 : a * (a + 1) * (2 * a + 1) / 6);
    
        cout << big - small << endl;

    }

    return 0;
}