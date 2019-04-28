#include<iostream>
#include<string>
using namespace std;
int main() 
{
    int n;
    while (cin >> n && n != 0)
    {
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int nums[10] = { 0 };
            string line; cin >> line;
            for (int j = 0; j < line.length(); j++)
            {
                nums[line[j] - '0']++;
            }

            for (int i = 0; i < 10; i++)
            {
                total += nums[i] / 2;
            }
        }

        cout << total << endl;
    }


    return 0;
}

