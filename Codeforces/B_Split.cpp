#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
    We are given a sequence a containing 2n integers. 
    We need to split it into two subsequences p and q, each of size n, 
    such that f(p) + f(q) is maximized. 
    Here, f(b) is the number of distinct elements with odd occurrences in sequence b.
*/

// Small Observations
/*
   
*/

// Claims on Algo
/*
    
*/


void solve() {
    int n;
    cin >> n;

    vector<int>a(2*n+1);
    for(int i=1;i<=2*n;i++)
    {
        int t;cin>>t;a[t]++;
    }

    int odd_cnt=0,even_cnt=0;

    for(int i=1;i<=2*n;i++)if(a[i]>0)
    {
        if(a[i]%2)odd_cnt++;
        else even_cnt++;
    }

    if(odd_cnt>0) cout << odd_cnt + 2 * even_cnt <<endl;
    else if( n % 2 == even_cnt % 2) cout << even_cnt * 2 << endl;
    else cout << even_cnt * 2-2 << endl;

}

int main() {
 

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
