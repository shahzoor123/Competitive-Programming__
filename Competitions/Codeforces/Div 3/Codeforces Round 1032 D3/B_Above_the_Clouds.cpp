#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int fr[26]{};

    for (int i=0;i<n;i++){
        fr[s[i] - 'a']++;
    }

    for (int i=1;i<n-1;i++){
        if(fr[s[i] - 'a'] > 1){
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;

    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
