#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    unordered_set<int> sameTeethSize;
    bool canSatisfy = false;

    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        if (sameTeethSize.count(t)){
            canSatisfy = true;
        }

        sameTeethSize.insert(t);
    }

    cout << (canSatisfy ? "YES\n" : "NO\n");

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
