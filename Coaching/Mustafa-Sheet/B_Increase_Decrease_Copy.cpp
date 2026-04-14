#include <bits/stdc++.h>
using namespace std;
#define int long long

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  
  
  
*/

// Claims on Algo
/*
  
  
*/

void solve(){
    int n;
    cin >> n;

    vector <int> a(n+10,0),b(n+10,0);


    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n+1; i++) {
        cin >> b[i];
    }


    int  ans = 0,mn=INT_MAX;
    for(int i=1;i<=n;i++){
        ans += abs(a[i] - b[i]);
        if (min(a[i],b[i]) <= b[n+1] && max(a[i],b[i]) >= b[n+1]){
            mn=0;
        }
		else{
            mn=min({mn,abs(a[i]-b[n+1]),abs(b[i]-b[n+1])});
        } 
    }



    cout << ans+mn+1 << endl;

    
}

signed main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}