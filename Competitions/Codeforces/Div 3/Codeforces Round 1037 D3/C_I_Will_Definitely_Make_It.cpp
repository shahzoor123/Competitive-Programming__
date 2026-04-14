#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n); for (auto &x : a) cin >> x;  
    
    int init = a[k-1];
    set<int> s;

    for (auto x : a){
        if(x >= init){
            s.insert(x);
        }
    }

    bool ans = true;
    int prev = init;

    for (auto &x : s){
        if(x - prev > init) ans = false;
        prev = x;
        
    }

    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
