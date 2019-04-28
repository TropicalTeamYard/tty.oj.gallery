#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main() 
{
    string line;
    int amount = 0;
    while (getline(cin,line) && !cin.eof())
    {
        istringstream istr(line);
        int a, po;
        char typeo;
        istr >> a >> typeo >> po;
        if ((typeo == 's' && po >= 4 && po <= 10 )||
            (typeo == 'b' && po >= 11 && po <= 17))
        {
            amount += a;
        }
        else
        {
            amount -= a;
        }

    }
    cout << amount << endl;

    return 0;
}