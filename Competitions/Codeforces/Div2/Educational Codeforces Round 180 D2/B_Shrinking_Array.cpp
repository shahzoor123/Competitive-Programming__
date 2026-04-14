#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    for (int i = 1; i < n; i++) {
        if(abs(a[i-1] - a[i]) <= 1){
            cout << 0 << endl;
            return;
        }
    }

    int ans = -1;

    for (int i=2;i<n;i++){
       if(min(a[i-1],a[i-2]) <= a[i] && a[i] <= max(a[i-1],a[i-2])) ans = 1;
    }

    
    for (int i=0;i<n-2;i++){
       if(min(a[i+1],a[i+2]) <= a[i] && a[i] <= max(a[i+1],a[i+2])) ans = 1;
    }

    cout << ans << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
