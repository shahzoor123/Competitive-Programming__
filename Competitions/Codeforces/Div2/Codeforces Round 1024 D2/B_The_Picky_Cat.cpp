#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        cnt += abs(a[i]) < abs(a[0]);
    }

    if(cnt <= n/2) cout << "YES" << endl;
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
