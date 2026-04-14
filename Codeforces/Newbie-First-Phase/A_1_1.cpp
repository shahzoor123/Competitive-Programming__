#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool changed = true;
    while (changed) {
        changed = false;

        for(int i = 1; i < n-1; i++) {
            if(s[i-1] == '1' && s[i+1] == '1' && s[i] == '0'){
                s[i] = '1';
                changed = true;
                break;
            }
        }
    }

    int maxOnes = 0;
    for(int i = 0; i < n; i++) if(s[i] == '1') maxOnes++;

    
    changed = true;
    while (changed) {
        changed = false;
        for(int i = 1; i < n-1; i++) {
            if(s[i-1] == '1' && s[i+1] == '1' && s[i] == '1') {
                s[i] = '0';
                changed = true;
                break;
            }
        }
    }

    int minOnes = 0;
    for(int i = 0; i < n; i++) if(s[i] == '1') minOnes++;

    cout << minOnes << " " << maxOnes << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}