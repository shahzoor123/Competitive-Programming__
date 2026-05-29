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
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> monsters;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        if (x % k == 0)
        {
            monsters.push_back({k, i});
        }
        else
        {
            monsters.push_back({x % k, i});
        }
    }

    stable_sort(monsters.begin(), monsters.end(), [](pair<ll, ll> a, pair<ll, ll> b)
                { return a.first > b.first; });

    for (ll i = 0; i < monsters.size(); i++)
    {

        cout << monsters[i].second + 1 << " ";
    }
    cout << endl;
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