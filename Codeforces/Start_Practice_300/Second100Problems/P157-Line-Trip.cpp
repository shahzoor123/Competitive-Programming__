#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

  
    a.insert(a.begin(), 0);
    a.push_back(x);

   
    sort(a.begin(), a.end());

    int minfuel = 0;
    for (int i = 1; i < a.size(); i++) {
        minfuel = max(minfuel, a[i] - a[i - 1]);
    }

    minfuel = max(minfuel, 2 * (x - a[a.size() - 2]));

    cout << minfuel << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
