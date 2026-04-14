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
    vector<int> a(n);
    for(int &x : a) cin >> x;

    
    for (int i = 0; i < n; i++) {
        int need = n - i; 

       if (a[i] == need) {
            continue;
        }
        else {
            // First mismatch found → we must reverse once

            int j = i + 1;
            while (j < n && a[j] != need) {
                j++;
            }
            reverse(a.begin() + i, a.begin() + j + 1);
            break;
        }
    }

    for (int x : a) cout << x << " ";
    cout << endl;
    
   
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}