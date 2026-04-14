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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> mxIdx;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= mx)
        {
            mx = a[i];
            mxIdx.push_back(i);
        }
    }

    int ops = 0;
    int end = mxIdx.size() - 1; 

    while (end >= 0){
        ops++;
        int selectedIdx = mxIdx[end];

        while (end >= 0 && mxIdx[end] >= selectedIdx){
            end--;
        }
    }


    cout << ops << endl;



    
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