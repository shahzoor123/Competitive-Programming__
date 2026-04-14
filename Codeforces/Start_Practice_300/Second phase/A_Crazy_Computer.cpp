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
    int n,c;
    cin >> n >> c;
    vector<int> a(n);
    for(int &x : a) cin >> x;


    int ans = 1;
	for(int i=1; i<n; i++){
		if(a[i]-a[i-1]>c) ans=1;
		else ans++;
	}
 
	cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}