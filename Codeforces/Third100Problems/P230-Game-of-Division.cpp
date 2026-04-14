#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    

    for (int i=0;i<n;i++){
        bool willWin = true;
        for (int j = 0; j < n; j++) {
            if (i != j && abs(a[i] - a[j]) % k == 0) {
                willWin = false;
                break;
            }
        }

        if(willWin){
            cout << "YES\n" << i + 1 << "\n";  
            return;
        }
    }


    cout << "NO" << endl;
  



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
