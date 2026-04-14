#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    bool ans = true;
    int smaller = int(1e9);

    while(n--){
        int x; cin >> x;
        if(x >= 2*smaller) ans = false;
        smaller = min(smaller,x);
    }

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
