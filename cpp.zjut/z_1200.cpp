/*
@id:1200
@difficulty:1.5/5
@detail: 二维数组，状态位，简单的多重循环。
@description:折纸游戏，判断纸张是否对称
@author:cht -ZJUT,2018
*/
#include<iostream>
using namespace std;

int main() 
{
    int test_num;cin >> test_num;
    bool result[100];
    for (int test_i = 0; test_i < test_num; test_i++)
    {
        int width;cin >> width;
        int a[20][20];
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < width; j++)
            {
                cin >> a[i][j];
            }
        }

        bool flag = true;
        //左右对折
        for (int i = 0; i < width / 2; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (a[j][i] != a[j][width - 1 - i])
                {
                    flag = false;
                    break;
                }
            }
        }
        //上下对折
        if (flag)
        {
            for (int i = 0; i < width/2; i++)
            {
                for (int j = 0; j < width; j++)
                {
                    if (a[i][j] != a[width - 1 -i][j])
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }

        result[test_i] = flag;
    }

    for (int test_i = 0; test_i < test_num; test_i++)
    {
        cout << (result[test_i] ? "yes" : "no") << endl;
    }


    return 0;
}