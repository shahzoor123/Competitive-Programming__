#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,x,y;
    cin >> n >> m >> x >> y;

    int minimumCrossings = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if(a < x || a < y){
            minimumCrossings++;
        }

    }


    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;

        if(b < x || b < y){
            minimumCrossings++;
        }
    }


    cout << minimumCrossings << endl;



    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();    
    } 

    return 0;
}
