a/*
@title:互质的个数
@id:1202
@difficulty:1.5/5
@detail: 求最大公因数，简单的循环
@description:求一组数中互质的对数
@author:cht -ZJUT,2018
*/

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

typedef long long ld;

//辗转相除法
ld get_max_el(ld a,ld b) 
{
    if (a < b)
    {
        ld t = a;
        a = b;
        b = t;
    }
    if (b != 0)
    {
        return get_max_el(b, a%b);
    }
    else
    {
        return a;
    }
}

int main()
{


    string line;
    while (getline(cin,line))
    {
        istringstream istr(line);
        ld arr[100]; int arr_num = 0;
        while (istr >> arr[arr_num++] && !istr.eof())
        {
        
        }

        int t_num = 0;
        for (int i = 0; i < arr_num - 1; i++)
        {
            for (int j = i+1; j < arr_num; j++)
            {
                if ( get_max_el(arr[i],arr[j]) ==1)
                {
                    t_num ++;
                }
            }
        }

        cout << t_num << endl;

    }


    return 0;
}