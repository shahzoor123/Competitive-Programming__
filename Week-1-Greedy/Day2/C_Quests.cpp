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
    vector<int> a(n), b(n);
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;

    int maxSum = 0;

    int previousMax = 0;

    vector<int> result(n);

    for (int i = 0; i < n; i++)
    {

        maxSum += a[i];
        previousMax = max(previousMax, b[i]);

        if (k > 0)
        {
            k--;
        }
        else{
            break;
        }

        maxSum += previousMax * k;
        result[i] = maxSum;
        maxSum -= previousMax * k;
    }

    sort(result.begin(), result.end());

    cout << result[n - 1] << endl;
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