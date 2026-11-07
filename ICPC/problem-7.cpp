#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> v1(n);
    vector<long long> v2(n);

    long long t1 = 0;
    long long t2 = 0;

    long long s = 0;
    long long es = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        t1 += v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];

        es += v1[i] - v2[i];

        if (es < 0)
        {
            s = i + 1;
            es = 0;
        }

        t2 += v2[i];
    }

    if (t1 < t2)
        cout << "-1" << endl;

    else
        cout << s + 1 << endl;
}

int main()
{

    solve();
    return 0;
}