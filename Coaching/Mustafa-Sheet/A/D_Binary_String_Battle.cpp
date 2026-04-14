#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    int lp=n/2;

    int ones = 0;

    for (auto c : s){
        if(c == '1'){
            ones++;
        }
    }

    if (k >= ones || k > lp){
        cout << "Alice" << endl;
    }
    else{
        cout << "Bob" << endl;
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
