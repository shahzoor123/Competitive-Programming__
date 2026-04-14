#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    vector<int> ideal(102);
    iota(ideal.begin(), ideal.end(), 0); 

    unordered_set<int> present(a.begin(), a.end());

    for (int x : ideal) {
        if (present.find(x) == present.end()) {
            cout << x << "\n";
            break;
        }
    }
}

int main(){
    int t;  
    cin >> t;
    while (t--) solve();
    return 0;
}
