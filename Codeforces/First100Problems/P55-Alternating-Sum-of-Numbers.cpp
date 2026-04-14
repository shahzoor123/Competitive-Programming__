#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int total_sum = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0){
            total_sum += a[i];
        }
        else{
           total_sum  -= a[i]; 
        }
    
    }

    cout << total_sum << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
