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

    int n, min=INT_MAX, sum=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=0; j<arr[i]; j++){
            int x;
            cin>>x;
            sum += x*5+15; 
        }
        if(sum<=min){
            min = sum;
        }
    }
    cout<<min;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}