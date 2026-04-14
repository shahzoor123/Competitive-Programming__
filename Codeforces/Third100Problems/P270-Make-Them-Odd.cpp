#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    bool allOdd = true;
    for (int i=0;i<n;i++){
        if(a[i] % 2 == 0){
            allOdd = false;
        }
    }

    if(allOdd){
        cout << 0 << endl;
        return;
    }

    set<int> operations;

    for (int i=0;i<n;i++){
        while(a[i] % 2 == 0){
            operations.insert(a[i]);
            a[i] /= 2;
        }
    }


    cout << operations.size() << endl;


}

int main() {

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
