#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    for (int i=1;i<=26;i++){
        for (int j=1;j<=26;j++){
            for (int y=1;y<=26;y++){
                if(i + j + y == n) {
                    cout << char('a'+i-1) << char('a'+j-1) << char('a'+y-1) << endl;
                    return;
                }
            }
        }
    }
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
