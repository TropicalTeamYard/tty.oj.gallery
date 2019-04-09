#include<string>
#include<iostream>
using namespace std;

int main() 
{
    string a, b;
    while (cin >> a >> b && !cin.eof())
    {
        char m = a[a.length() - 1];
        char n = b[b.length() - 1];

        char list[] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };
        bool flag = false;
        for (int i = 0; i < 12; i++)
        {
            if (m == list[i])
            {
                flag = n == list[i + 1];
                break;
            }
        }

        cout << (flag ? "Yes" : "No") << endl;
    }

    return 0;
}