#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string line;
    while (getline(cin,line) && line!="0")
    {
        int length = line.length();
        bool flag = true;
        for (int i = 0; i < length/2; i++)
        {
            if (line[i] != line[length - 1 - i])
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}