#include<string>
#include<iostream>
using namespace std;

int main() 
{
    string data[1000];
    int datalength = 0;
    while (cin >> data[datalength++] && !cin.eof())
    {

    }

    for (int i = 0; i < datalength; i++)
    {
        for (int j = 0; j < data[i].length(); j++)
        {
            for (int k = 0; k < data[i].length(); k++)
            {
                cout << data[i][(j + k) % data[i].length()];
            }
            cout << endl;
        }

        if (i < datalength - 1)
        {
            cout << endl ;
        }
    }

    return 0;
}