/*
@title:字符串解密
@id:1203
@difficulty:1.5/5
@detail: 简单的循环计算，字符串与数值互转.
@description:给定一个字符串，进行循环解密.
@author:cht -ZJUT,2018
*/

#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string line1, line2;
    while (getline(cin,line1) && getline(cin,line2))
    {
        string result;
        for (int i = 0; i < line2.length(); i++)
        {
            int key = line1[i % line1.length()] - '0';
            char _oldchar = line2[i];
            char _newchar = _oldchar - key ;
            if (_newchar < 32)
            {
                _newchar += 122 - 32 + 1;
            }
            result += _newchar;
        }
        cout << result << endl;
    }

    return 0;
}