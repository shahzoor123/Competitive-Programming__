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
    int w,h,k;
    cin >> w >> h >> k;

    int gilded = 0;

   for(int i=0;i<k;i++){
        gilded += 2 * w;
        h -= 2;
        gilded += 2 * h;
        w -= 4;
        h -= 2;
   }

    cout << gilded << endl;
 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}