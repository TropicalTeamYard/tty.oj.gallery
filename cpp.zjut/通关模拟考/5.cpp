#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void acm_5_calc(int h,int z,int& ra)
{
    ra = (z - 2 * h) / 2;
}

int main() 
{
    string line;
    while (getline(cin,line) && !cin.eof())
    {
        int n, h, z,ra;
        istringstream istr(line);
        istr >> n >> h >> z;
        acm_5_calc(h, z, ra);

        if (ra >= n + 1 && ra <= 2 * n - 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        
    }
    return 0;

}
