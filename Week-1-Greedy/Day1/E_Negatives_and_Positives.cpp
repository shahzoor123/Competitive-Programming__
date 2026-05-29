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
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    ll maxSum = 0;
    vector<ll> negative;
    int firstPositive = -1;

    f(i, n)
    {

        if (a[i] > 0)
        {   
            maxSum += a[i];
            if (firstPositive == -1)
            {
                firstPositive = a[i];
            }
        }
        else
        {
            negative.push_back(a[i]);
        }
    }

    // cout << maxSum << endl;

    int m = negative.size();

    ll negativeSum = 0;

    if (m % 2 == 0)
    {
        f(i, m)
        {
            negativeSum += abs(negative[i]);
        }
    }
    else
    {
        f(i, m - 1)
        {
            negativeSum += abs(negative[i]);
        }
        if (m > 0 && firstPositive != -1)
        {

            if (abs(negative[m - 1]) > firstPositive)
            {
                maxSum += abs(negative[m - 1]);
                maxSum -= firstPositive * 2;
             
            }
            else
            {
                maxSum += negative[m - 1];
            }
        }
        else if(m > 0 && firstPositive == -1){
            maxSum += negative[m - 1];
        }
    }

    maxSum += negativeSum;

    cout << maxSum << endl;
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