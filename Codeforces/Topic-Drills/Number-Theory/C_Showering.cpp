#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
    // find any available time slot which is not occupiad 
    // if that slot is >= s then yes 
    // else no
  
  
*/

// Claims on Algo
/*
  
  
*/




void solve(){
    int n,s,m;
    cin >> n >> s >> m;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    if(v[0].first >= s){
        cout << "YES\n";
        return;
    }


    for (int i = 1; i < n; i++) {
        int free_time = v[i].first - v[i-1].second;
        if(free_time >= s){
            cout << "YES\n";
            return;
        }
    }


    if(m - v[n-1].second >= s){
        cout << "YES\n";
        return;
    }

    cout << "NO\n";

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}