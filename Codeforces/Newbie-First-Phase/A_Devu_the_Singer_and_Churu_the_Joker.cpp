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
    int n,d;
    cin >> n >> d;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    int totalSongTime = 0;

    f(i,n){
        totalSongTime += a[i];
    }

    int minRequired = totalSongTime + (n-1) * 10;
    
    if(minRequired > d) {
        cout << -1 << endl;
        return;
    }

    int remainingTime = d - totalSongTime - (n-1) * 10;

    int jokes = (n-1) * 2;

    jokes += remainingTime / 5;

    cout << jokes << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}