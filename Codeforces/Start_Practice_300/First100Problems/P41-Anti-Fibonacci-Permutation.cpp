#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n;
    cin >> n;

    // cout << "Input n: " << n << endl;


    for (int i=1;i<=n;i++){
        cout << i;
        for (int j=n;j>0;j--){
            if (i != j){
                cout << " " << j;
            }
            

        }

    cout << endl;

    }



}

int main() {

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
