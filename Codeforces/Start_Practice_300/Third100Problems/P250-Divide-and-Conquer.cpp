#include <bits/stdc++.h>
using namespace std;


int totalSum (vector<int> a){

    int sum = 0;
    for (int i=0;i<a.size();i++){
        sum += a[i];
    }

    return sum;
}


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int sum = totalSum(a);

    if (sum % 2 == 0) {
        cout << 0 << endl;
        return;  
    }

    int minSteps = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x = a[i];
        int steps = 0;
        while (x % 2 == a[i] % 2) { 
            x /= 2;
            steps++;
        }
        minSteps = min(minSteps, steps);
    }

    cout << minSteps << endl;
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
