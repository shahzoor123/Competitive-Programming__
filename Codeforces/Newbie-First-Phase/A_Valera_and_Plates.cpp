#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout << endl
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
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
            m--;
        else if (k != 0)
            k--;
        else
            m--;
    }
    if (m <= 0)
        cout << -m;
    else
        cout << 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}