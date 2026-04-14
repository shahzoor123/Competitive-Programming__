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
    long long n,h,k;
    cin >> n >> h >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    int maxElement = max_element(a.begin(),a.end()) - a.begin();
    int minElement = min_element(a.begin(),a.end())- a.begin();


    if(minElement < maxElement){
        swap(a[minElement], a[maxElement]);
    }


    long long minTime = 0;

    long long i = 0;
    while(h > 0){
        h -= a[i];
        minTime++;

        if(h <= 0) break;

        if(i == n-1){
            minTime += k;
            i = 0;
        }
        else{
            i++;
        }
   
    }

    cout << minTime << endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}