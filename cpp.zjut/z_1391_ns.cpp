#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int main() 
{
    string line1, line2;
    while (getline(cin,line1) && getline(cin,line2) && !cin.eof())
    {
        int num, time;
        istringstream istr(line1);
        istr >> num >> time;

        int *times = new int[num];
        istringstream istr2(line2);
        for (int i = 0; i < num; i++)
        {
            istr2 >> times[i];
        }

        sort(times, times + num);

        int result = 0;
        int timeall = 0;
        int i = 0;
        while ((timeall += times[i++] )&& timeall < time)
        {
            for (int j = 0; j < i; j++)
            {
                result += times[j];
            }
        }

        cout << (i - 1) << " " << result << endl;

    }

    return 0;
}