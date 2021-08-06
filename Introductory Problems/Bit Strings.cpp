//Problem Link - https://cses.fi/problemset/task/1617
/*By Pratyaksh Khurana*/

#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, res = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
        res = (res * 2) % M;

    cout << res;
    return 0;
}