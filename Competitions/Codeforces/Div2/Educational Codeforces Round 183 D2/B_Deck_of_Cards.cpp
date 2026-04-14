#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;


    if (k==n) {
        for (int i=0;i<n;i++) cout << '-' ;
        cout << endl;
        return;
    }

    int c0 = 0,c1 = 0,c2 = 0;

    for (int i=0;i<k;i++) {
        if(s[i] == '0') c0++;
        if(s[i] == '1') c1++;
        if(s[i] == '2') c2++;
    }


    for (int i=0;i<n;i++) {
        if (i < c0) cout << '-';
        else if (i >= n-c1) cout << '-';
        else if (i<c0+c2 || i>=n-c1-c2) cout << '?';
        else cout << '+';
    }

    cout << endl;

}

int main() {

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
