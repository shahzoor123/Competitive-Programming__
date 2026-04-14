#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout<<endl
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

void solve() {
    int n;
    cin >> n;

    int size = 2 * n;

    vector<int> diag(size + 1, 0);
    vector<bool> seen(size + 1, false); 

   
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int val;
            cin >> val;
            int d = i + j;
            if (diag[d] == 0) {
                diag[d] = val;
                seen[val] = true;
            }
        }
    }


    int p1 = 0;
    for (int x = 1; x <= size; ++x) {
        if (!seen[x]) {
            p1 = x;
            break;
        }
    }


    cout << p1 << " ";
    for (int d = 2; d <= size; ++d)
        cout << diag[d] << " ";
    cout << "\n";
   

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}