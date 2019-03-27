/*
@title:01字符串排序
@id:1204
@difficulty:1.0/5
@detail: 排序算法，自定义比较器.
@description:给出一组01字符串，并进行排序.
@author:cht -ZJUT,2018
*/

#include<iostream>
#include<string>
using namespace std;
	
int comparer_01string(string cleft,string cright) 
{
    int ldiff = cleft.length() - cright.length();
    if (ldiff != 0)
    {
        return ldiff;
    }

    int c1=0, c2=0;
    for (int i = 0; i < cleft.length(); i++)
    {
        if (cleft[i] == '1')
        {
            c1++;
        }
        if (cright[i] == '1')
        {
            c2++;
        }
    }

    int cdiff = c1 - c2;
    if (cdiff!= 0)
    {
        return cdiff;
    }

    for (int i = 0; i < cleft.length(); i++)
    {
        if (cleft[i] < cright[i])
        {
            return -1;
        }
        else if(cleft[i] > cright[i])
        {
            return 1;
        }
    }

    return 0;
}

int main() 
{
    string lines[1000];
    int str_num = 0;
    while (getline(cin,lines[str_num++]) && !cin.eof())
    {

    }
    //int str_num; cin >> str_num;
    //getline(cin, lines[0]);
    //for (int i = 0; i < str_num; i++)
    //{
    //	getline(cin, lines[i]);
    //}

    
    for (int i = 0; i < str_num -1; i++)
    {
        int maxindex = i;
        for (int j = i+1; j < str_num; j++)
        {
            if (comparer_01string(lines[j],lines[maxindex]) < 0)
            {
                maxindex = j;
            }
        }
        if (maxindex != i)
        {
            string t = lines[i];
            lines[i] = lines[maxindex];
            lines[maxindex] = t;
        }
    }

    for (int i = 0; i < str_num; i++)
    {
        cout << lines[i] << endl;
    }


    return 0;
}