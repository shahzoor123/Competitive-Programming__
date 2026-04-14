#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;

    ll maxCollection = 0;
    vector<ll> odd;
    for (ll i = 0; i < n; i++) {
        int x; cin >> x;
         if(x % 2 != 0){
            odd.push_back(x);
        }
        else{
            maxCollection += x;
        }
    }

    if(odd.empty()){
        cout << 0 << endl;
        return;
    }

    sort(odd.begin(), odd.end());
    
    int m = odd.size();
    for (ll i = m/2; i < m; i++) {
        maxCollection += odd[i];
    }

    cout << maxCollection << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
