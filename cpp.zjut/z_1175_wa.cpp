#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{
    int data1[100];
    double data2[100];

    int test_num = 0;
    while ((cin >> data1[test_num] >> data2[test_num],test_num++) && !cin.eof())
    {


    }

    //cin >> test_num;
    //for (int i = 0; i < test_num; i++)
    //{
    //	cin >> data1[i] >> data2[i];
    //}

    cout << setiosflags(ios::fixed) << setprecision(3);
    
    for (int i = 0; i < test_num; i++)
    {
        int n = data1[i];
        double q = data2[i];
        if (q == 1)
        {
            cout << (n +1) << endl;
        }
        else
        {
            cout << (pow(q, n + 1) - 1) / (q - 1) << endl;
        }
    }

    return 0;
}