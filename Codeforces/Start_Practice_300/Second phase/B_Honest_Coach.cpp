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
    int n,min=INT_MAX;
    cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

    sort(a,a+n);
    for(int i=0; i<n-1; i++)
        if(a[i+1]-a[i]<min)
            min=a[i+1]-a[i];
            
    cout<< min << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}