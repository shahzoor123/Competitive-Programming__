#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define f(i, n) for (ll i = 0; i < n; ++i)




void solve() {
    string s;
    cin >> s;

    
    bool allSame = true;
    f(i,s.size()-1){
        if(s[i] != s[i+1]){
            allSame = false;
            break;
        }
    }

    if(allSame){
        cout << -1 << endl;
        return;
    }


    cout << s.size()-1 << endl;
 

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}