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
    
    int maxi=-1,idx=1;
    
    for(int i=1;i<=n;i++){
        int a,b,c,d;cin>>a>>b>>c>>d;

        if(i==1) maxi=a+b+c+d;

        if(a+b+c+d>maxi) idx++;
    }
    cout<<idx;
  
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     solve();
    return 0;
}