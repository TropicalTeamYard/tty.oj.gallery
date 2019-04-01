#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        double grade;
        cin >> grade;
        double gp = 0;
        if (grade >= 60)
        {
            gp = (grade - 50) / 10;
        }

        cout << setiosflags(ios::fixed) << setprecision(1) << gp << endl;
    }

    return 0;
}