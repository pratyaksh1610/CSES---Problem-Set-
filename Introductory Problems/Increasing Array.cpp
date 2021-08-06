//Problem Link - https://cses.fi/problemset/task/1094
/*Pratyaksh Khurana*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    cin >> n;
    int a[n];
    long long moves = 0;
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 1; i < n; i++)
    {
        while (a[i] < a[i - 1])
        {
            a[i] = a[i] + 1;
            moves++;
        }
    }
    cout << moves;

    return 0;
}