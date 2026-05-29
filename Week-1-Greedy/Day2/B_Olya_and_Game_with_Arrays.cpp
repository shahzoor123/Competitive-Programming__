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
    ll n;
    cin >> n;
    vector<vector<ll>> a(n);
    f(i, n)
    {
        ll m;
        cin >> m;
        a[i].resize(m);
        f(j, m)
        {
            cin >> a[i][j];
        }
    }

    vector<ll> secondMin(n);

    ll globalMin = INT_MAX;
    ll totalSum = 0;

    f(i, n)
    {
        sort(a[i].begin(), a[i].end());
        secondMin[i] = a[i][1]; 
        totalSum += a[i][1];
        globalMin = min(globalMin, a[i][0]);

    }

    sort(secondMin.begin(), secondMin.end());

    totalSum -= secondMin[0];
    totalSum += globalMin;


    cout << totalSum << endl;
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