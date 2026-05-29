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
  By taking the frequacny count we will be able to check for the
  1 - p divible by k condition
  2 - And the k block each lenght k condition
  3 - same color condition

*/

// Claims on Algo
/*

*/

void solve()
{
    int n, k;
    cin >> n >> k;

    int firstcolor = 0, lastcolor = 0;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[0])
            firstcolor++;
        if (a[i] == a[n - 1] && firstcolor >= k)
            lastcolor++;
    }

    if (lastcolor >= k || (a[0] == a[n - 1] && firstcolor >= k))
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