#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() 
{
    string a;
    double b, c;
    double result = 0;
    while (cin >> a>> b >> c && !cin.eof())
    {
        result += floor(b * c * 10) / 10.0;
    }

    cout << result << endl;

    return 0;
}