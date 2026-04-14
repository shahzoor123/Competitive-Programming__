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
    vector<int> b(n);
    for(int &x : b) cin >> x;


    vector<int> reconstruct;
    reconstruct.push_back(b[0]);

    for(int i=1;i<n;i++){
        if (b[i] >= b[i-1]){
            reconstruct.push_back(b[i]);
        } 
        else{
            reconstruct.push_back(max(1, b[i] - 1));
            reconstruct.push_back(b[i]);
        }
    }

    cout << reconstruct.size() << endl;
    for(int i=0;i<reconstruct.size();i++){
        cout << reconstruct[i] << " "; 
    }

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