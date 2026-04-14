#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define f(i, n) for (ll i = 0; i < n; ++i)

// Problem Statement
/*

*/

// Small Observations
/*

*/

// Claims on Algo
/*

*/

void solve()
{
    int n, c1 = 0, c2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'X')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    int a = n / 2;
    int b = abs(c1 - a);
    cout << b << endl;
    if (c1 > a)
    {
        for (int i = 0; i < n && c1 > a; i++)
        {
            if (s[i] == 'X')
            {
                s[i] = 'x';
                c1--;
            }
        }
    }
    else if (c1 < a)
    {
        for (int i = 0; i < n && c1 < a; i++)
        {
            if (s[i] == 'x')
            {
                s[i] = 'X';
                c1++;
            }
        }
    }
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}