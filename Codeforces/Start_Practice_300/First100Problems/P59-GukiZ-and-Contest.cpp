#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        k = 0;
        for (int j = 0; j < n; ++j) {
            if (a[i] < a[j]){
                k++;
            }
        }

        cout << k + 1 << " ";
    }




}

int main() {
    solve();
    return 0;
}
