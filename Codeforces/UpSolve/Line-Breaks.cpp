#include<bits/stdc++.h>
using namespace std;


void solve(){

    int n, m;
    cin >> n >> m;

    int Ans = -1;


    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        m -= str.size();

        if (m < 0 and Ans == -1) {
            Ans = i - 1;
        }
        
    }   

    if (Ans == -1){
        Ans = n;
    }


    cout << Ans << endl;

}


signed main() {
    int t;
    cin >> t;

    while (t--) {
      
      solve();

    }

}
