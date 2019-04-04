#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string line;
    while (getline(cin,line) && line != "#")
    {
        int result = 0;
        for (int i = 0; i < line.length(); i++)
        {
            result += (i + 1) * (line[i] == ' ' ? 0 : line[i] - 'A' + 1);
        }

        cout << result << endl;
    }
    return 0;
}