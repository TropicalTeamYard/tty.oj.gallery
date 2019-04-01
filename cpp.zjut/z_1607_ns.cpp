#include<iostream>
using namespace std;

int main() 
{
    int m, n;
    while (cin >> n >> m && !cin.eof())
    {
        //确保m>=n;
        if (m < n)
        {
            int t = m;
            m = n;
            n = t;
        }

        
        int minus = (m - n) % n;
        if (minus == 0)
        {
            minus = n;
        }
        
        //gap==差
        int gap = minus;

        int t_gap = n % minus;
        int u_gap = m % minus;

        if (t_gap > 0 && t_gap < gap )
        {
            gap = t_gap;
            //反向调整
            if (minus - gap < gap)
            {
                gap = minus - gap;
            }
        }
        if (u_gap > 0 && u_gap < gap)
        {
            gap = u_gap;
            if (minus - gap < gap)
            {
                gap = minus - gap;
            }
        }



        cout << gap << endl;
    }
    return 0;
}