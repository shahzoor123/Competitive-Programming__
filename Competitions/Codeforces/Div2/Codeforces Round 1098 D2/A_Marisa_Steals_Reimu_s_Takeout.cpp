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

    int maxOperations = 0;
    int cntZero = 0;
    int cntTwo = 0;
    int cntOne = 0;

    for(int i=0;i<n;i++){
        if(a[i] == 0){
            cntZero++;
        }
        else if (a[i] == 1){
            cntOne++;
        }
        else{
            cntTwo++;
        }

    }

    

    maxOperations += min(cntOne,cntTwo);

    int x =  (max(cntOne,cntTwo) - min(cntOne,cntTwo)) / 3;

    maxOperations += x;

    maxOperations += cntZero;

    cout << maxOperations << endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}