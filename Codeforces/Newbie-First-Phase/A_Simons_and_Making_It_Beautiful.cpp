#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
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

    if (n == 1) {
        cout << a[0] << endl;
        return;
    }


    int maxPosition = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == n) {
            maxPosition = i;
            break;
        }
    }


    if (maxPosition != 0) {
        swap(a[maxPosition], a[0]);
    } 
    else {
        int runMaximum = 0, ugly = -1;
        for (int i = 1; i < n; i++) {
            if (a[i] > runMaximum) {
                runMaximum = a[i];
                ugly = i;
            }
        }
        if (ugly != -1) {
            swap(a[ugly], a[1]);
        }
    } 

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

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