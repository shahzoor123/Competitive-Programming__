#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k,x;
    cin >> k >> x;



    while (k > 0){
            x *= 2;
            k--;
    }
    cout << x << endl;


    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
