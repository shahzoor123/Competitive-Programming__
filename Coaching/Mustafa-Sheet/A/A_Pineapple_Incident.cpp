#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t, s, x;
    cin >> t >> s >> x;

    if ( x-t>=0 && (x-t)%s==0 || x-t-1>0 && (x-t-1)%s==0 ) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
}

int main(){
    solve();        
    return 0;
}
