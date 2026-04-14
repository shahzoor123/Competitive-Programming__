#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(2*n);
    for (int &x : a) cin >> x;

    int size = a.size();
    int switchesOnCount = count(a.begin(),a.end(), 1);

    int ans;
    if (switchesOnCount > n){
        ans = 2 * n - switchesOnCount;
    }
    else {
        ans = switchesOnCount;
    } 
        
    cout << switchesOnCount % 2 << ' ' << ans << endl;



    
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
