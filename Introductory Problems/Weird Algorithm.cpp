//Problem Link - https://cses.fi/problemset/task/1068/
/*By Pratyaksh Khurana */

#include <iostream>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n;
    cin >> n;

    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
            n /= 2;

        else
            n = n * 3 + 1;
    }
    cout << 1;
    return 0;
}