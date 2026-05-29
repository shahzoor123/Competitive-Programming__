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

int findMinDiff (vector<int>:: iterator start, vector<int>::iterator end){
    int mn = *min_element(start,end);
    int mx = *max_element(start,end);

    return mx - mn;
}

void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    for(int &x : a) cin >> x;

    sort(a.begin(),a.end());

    int currentDiff = *max_element(a.begin(),a.end());;
    
    for(int i=0;i<=m-n;i++){
        int diff = findMinDiff(a.begin()+i,a.begin()+i+n);

        currentDiff = min(currentDiff , diff);
        
    }

    
    cout << currentDiff << endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}