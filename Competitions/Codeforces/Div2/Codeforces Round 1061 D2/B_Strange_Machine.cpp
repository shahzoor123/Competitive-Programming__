#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  
  
  
*/

// Claims on Algo
/*
  
  
*/

void solve(){
    int n, q;
    cin >> n >> q;

    int b = 0;

    string s;
    cin >> s;

    for (char c : s){
        if(c == 'B'){
            b = 1;
        }
    }


    for (int i=0;i<q;i++) {
            int x; cin >> x;
            if (b == 0) cout << x << endl;
            else{
                int i = 0, ans = 0;
                while (x) {
                    ans++;
                    if (s[i] == 'A') x--;
                    else x /= 2;
                    i++;
                    i %= n;
                }
                cout << ans << "\n";
            }
        
    }

}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}