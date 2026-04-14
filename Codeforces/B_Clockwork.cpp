#include <bits/stdc++.h>
using namespace std;

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

    bool ans = false;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if ((i - 1) * 2 >= x || (n - i) * 2 >= x)
            ans = true;
    }

    if (ans)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}