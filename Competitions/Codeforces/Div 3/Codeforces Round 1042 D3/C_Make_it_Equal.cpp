#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k; cin >> n >> k;

    map<long long ,long long> s;
    for (int i = 0; i < n; i++){
        long long x; cin >> x;
        s[x % k]++,s[k - x % k]++;
    }

    for (int i = 0; i < n; i++){
        long long x; cin >> x;
        // cout << x << " ";
        s[x % k]--,s[k - x % k]--;
    }

    for (auto it : s){
        if(it.second){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
