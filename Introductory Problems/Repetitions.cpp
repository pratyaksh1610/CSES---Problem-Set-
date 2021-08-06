//Problem Link - https://cses.fi/problemset/task/1069
/*By Pratyaksh Khurana */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long i, j, count = 1, maxi = -1;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i + 1; s[i] != '\0'; j++)
        {
            if (s[i] == s[j])
                count++;
            else
            {
                i = j - 1;
                break;
            }
        }

        maxi = max(maxi, count);
        count = 1;
    }

    maxi = max(maxi, count);
    cout << maxi;

    return 0;
}
