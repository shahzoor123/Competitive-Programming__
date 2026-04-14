#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;


    if (s.size() == 1 && s[0] == 'B'){
        cout << 1 << endl;
        return;
    }

    int startB = -1, endB = -1;

    for (int i=0;i<n;i++){
        if(s[i] == 'B'){
            startB = i + 1;
            break;
        }
    }

    for (int i=n-1;i>=0;i--){
        if(s[i] == 'B'){
            endB = i + 1;
            break;
        }
    }


    cout << (endB - startB + 1) << endl;
    
    
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
