#include<iostream>
#include<string>
using namespace std;

int main() 
{
    char search_key; string link;
    while (cin >> search_key >> link && !cin.eof())
    {
        int length = link.length();
        int validlen = 0;
        for (int i = 0; i < length; i++)
        {
            if (link[i] == search_key)
            {
                validlen++;
            }
        }
        cout << (validlen >= (length + 1) / 2 ? "Yes" : "No") << endl;

    }

    return 0;
}