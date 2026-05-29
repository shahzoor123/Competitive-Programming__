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
    map<int,int> cnt;
    f(i,n){
        int x;
        cin >> x;
        cnt[x]++;
    } 

    

    int taxies = 0;

    taxies += cnt[4];
    taxies += cnt [3];
    cnt[1] -= min(cnt[1],cnt[3]);
    taxies += cnt[2]/2;
    if(cnt[2] % 2 != 0){
        taxies += 1;
        cnt[1] -= min(cnt[1], 2);
    } 

    taxies += ceil(cnt[1] / 4.0);


    cout << taxies << endl;
    

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     solve();
    return 0;
}