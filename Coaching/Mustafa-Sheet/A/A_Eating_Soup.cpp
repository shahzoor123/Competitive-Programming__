#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;
    cin >> n >> m;

    if(m == 0){
        cout << 1 << endl;
    }
    else if (n == m) {
        cout << 0 << endl;
    }
    else{
        if (m - 1 < abs(n/2)){
            cout << m << endl;
        }
        else{
            cout << n - m << endl;
        }
    }

}



int main(){

    solve();        


  return 0;
}