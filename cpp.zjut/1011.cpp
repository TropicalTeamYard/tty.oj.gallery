#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line;
    while (cin >> line && !cin.eof())
    {
        int length = line.length();
        for (int i = 0; i < length; i++)
        {
            if (line[i] == '0')
            {
                line[i] = '1';
            }
            else
            {
                line[i] = '0';
            }
        }
        cout << line << endl;
    }


    return 0;
}