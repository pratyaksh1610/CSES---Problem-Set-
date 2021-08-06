//Problem Link - https://cses.fi/problemset/task/1083
/*By Pratyaksh Khurana*/

#include <iostream>
using namespace std;

int main()
{
    long long n, sum_n = 0, i = 1;
    cin >> n;

    long long sum = (n * (n + 1)) / 2;
    while (i < n)
    {
        int num;
        cin >> num;
        sum_n += num;
        i++;
    }
    cout << sum - sum_n;
}