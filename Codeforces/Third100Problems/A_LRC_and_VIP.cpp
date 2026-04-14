#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;

    vector<int> b(a);

    sort(a.rbegin(), a.rend());

    if(a[0] == a[n-1]) {
        cout << "NO" << endl;
        return;
    }

    for(int i=0;i<n;i++){
        if((b[i] == a[0])){
            b[i] = 1;
        }
        else{
            b[i] = 2;
        }
    }
    cout << "YES" << endl;
    for (int i=0;i<n;i++){
        cout << b[i] << " ";
    }
    cout << endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
