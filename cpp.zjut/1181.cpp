#include<iostream>
#include<string>
using namespace std;

bool is_openumber(int number) 
{
    if (number <= 1)
    {
        return false;
    }
    else
    {
        bool flag = true;
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                flag = false;
            }
        }

        return flag;
    }
}

int main() 
{
    int num;
    while (cin >> num && !cin.eof())
    {
        bool flag = true;

        if (is_openumber(num))
        {
            string line = to_string(num);
            int length = line.length();
            for (int i = 0; i < length / 2; i++)
            {
                if (line[i] != line[length - i - 1])
                {
                    flag = false;
                    break;
                }
            }
        }
        else
        {
            flag = false;
        }

        cout << (flag ? "Yes" : "No") << endl;

    }
    return 0;
}