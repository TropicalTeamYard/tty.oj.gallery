/*
@description:有难度的统计题
@author:cht ZJUT 2018
*/

#include<iostream>
using namespace std;

int main()
{
    int num,numt;
    while (cin >> num && !cin.eof())
    {
        int seq[10];
        int seq_length = 0;

        numt = num;
        while (numt > 0)
        {
            seq[seq_length++] = numt % 10;
            numt /= 10;
        }

        int count_f = 0;
        int result = 0;

        for (int i = seq_length - 1; i >= 0; i--)
        {
            int tnum = seq[i];
            int yn = num / (int)(pow(10, i + 1));
            if (tnum > 1)
            {
                yn += 1;
            }

            result += yn * pow(10, i);
            if (tnum == 1)
            {
                result += (num % (int)(pow(10, i))) + 1;
            }
        }
        
        cout << result << endl;
    }

    return 0;
}