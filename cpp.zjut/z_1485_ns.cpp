#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool string_comparer(const string &a, const string &b) 
{
    if (a.length() < b.length())
    {
        return true;
    }
    else if (a.length() > b.length())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i]!= b[i])
            {
                if (a[i] - b[i] > 0)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int acm_z_1485()
{
    int num;
    
    int team_count = 0;
    int arr_length = 0;
    string arr_name[1000];
    int arr_vote[1000];

    //数据输入部分
    while (cin >> num && num != 0)
    {
        team_count++;
        for (int i = 0; i < num; i++)
        {
            string name;
            cin >> name;

            bool find = false;
            for (int i = 0; i < arr_length; i++)
            {
                if (arr_name[i] == name)
                {
                    arr_vote[i] ++;
                    find = true;
                    break;
                }
            }
            if (!find)
            {
                arr_name[arr_length] = name;
                arr_vote[arr_length] = 1;
                arr_length++;
            }

        }
    }
    //筛选部分
    string valid[1000];
    int valid_count = 0;

    for (int i = 0; i < arr_length; i++)
    {
        if (arr_vote[i] >= 2 * team_count / 3.0 )
        {
            valid[valid_count++] = arr_name[i];
        }
    }

    sort(valid, valid + valid_count,string_comparer);
    for (int i = 0; i < valid_count; i++)
    {
        cout << valid[i] << endl;
    }


    return 0;
}