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
    int n, x;
    cin >> n >> x;
    int c = 0;
    int duration = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        while (c + x < a)
        {
            c += x;
        }
        duration += b - c;
        c = b;
    }
    cout << duration << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}