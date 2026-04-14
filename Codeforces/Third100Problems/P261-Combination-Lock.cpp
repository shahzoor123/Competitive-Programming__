#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    if(n%2==1) {
        for(int i=1;i<=n;i++) {
            cout<<n-i + 1<<" ";
        } 
        cout<<endl;
    }
    else cout<<-1<<endl;
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