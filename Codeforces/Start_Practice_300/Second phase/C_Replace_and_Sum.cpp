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
    int n,q,l,r;
    cin >> n >> q;

    vector<int>a(n+2),b(n+2),maxOptimized(n+2),p(n+2,0);
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++)cin>>b[i];

    for(int i=n; i>=1; i--){
        maxOptimized[i] = max({a[i],b[i], maxOptimized[i+1]});
    }

    for(int i=1; i<=n; i++){
        p[i] = p[i-1] + maxOptimized[i];
    }


    while(q--){
			cin>>l>>r;
			cout<<p[r]-p[l-1]<<" ";
		}
	cout<< endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}