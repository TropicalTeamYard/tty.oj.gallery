#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int z_1450_ope(int n) 
{
    int result = -1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            result = 0;
            break;
        }
    }

    if (result == -1)
    {
        result = 0;
        istringstream istr(to_string(n));
        char a;
        while (istr >> a && !istr.eof())
        {
            result += a - '0';
        }
    }

    return result;
}

int main() 
{
    int num;
    while (cin >> num && !cin.eof())
    {
        cout << z_1450_ope(num) << endl;
    }

    return 0;
}