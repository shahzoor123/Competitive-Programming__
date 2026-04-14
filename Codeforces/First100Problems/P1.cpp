#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1,a2,a4,a5;
    cin >>  a1 >> a2 >> a4 >> a5;

    int a3 = a4 - a2;

    int maximumFibonacciness = 0;

    if (a1 + a2 == a3) maximumFibonacciness++;
    if (a2 + a3 == a4) maximumFibonacciness++;
    if (a3 + a4 == a5) maximumFibonacciness++;


    cout << maximumFibonacciness << endl;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
