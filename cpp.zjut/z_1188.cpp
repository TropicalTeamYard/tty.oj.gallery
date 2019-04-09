#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() 
{
    string line;
    int result = 0;

    /*int test_num;
    cin >> test_num;
    getline(cin, line);*/
    while (getline(cin, line) && !cin.eof())
    {
    /*for (int test_i = 0; test_i < test_num; test_i++)
    {*/
        //getline(cin, line);
        istringstream istr(line);
        string month;
        int day;
        int year;
        char cper = '0';

        istr >> month >> day >> year;
        if (!cin.eof())
        {
            istr >> cper;
        }

        if (day == 25)
        {
            if (cper == '*')
            {
                result += 2;
            }
            else
            {
                ++result;
            }
        }

    /*}*/
    }
    cout << result << endl;

    return 0;
}