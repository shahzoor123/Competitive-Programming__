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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 2 || (sum % 2 == 0 && (k * n) % 2 == 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}