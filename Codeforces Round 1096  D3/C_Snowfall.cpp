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
    int n;
    cin >> n;

    vector<int> multipleOfThree, multipleOfTwo, multipleOfSix, remaining;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 6 == 0)
            multipleOfSix.push_back(x);
        else if (x % 3 == 0)
            multipleOfThree.push_back(x);
        else if (x % 2 == 0)
            multipleOfTwo.push_back(x);
        else
            remaining.push_back(x);
    }

    for (int x : multipleOfSix)
        cout << x << " ";
    for (int x : multipleOfTwo)
        cout << x << " ";
    for (int x : remaining)
        cout << x << " ";
    for (int x : multipleOfThree)
        cout << x << " ";
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