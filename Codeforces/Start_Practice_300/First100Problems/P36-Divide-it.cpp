#include <bits/stdc++.h>
using namespace std;



void solve() {
    long long n;
    cin >> n;

    long long moves = 0;

    while (n > 1){

        if (n % 2 == 0){
            n = n/2;
        } 
        else if (2 * n % 3 == 0){
            n = 2 * n / 3;
    
        }
        else if (4 * n % 5 == 0){
            n = 4 * n / 5;
        }
        else{
            cout << -1 << endl;
            return;
        }

        moves++;
    }
    

    cout << moves << endl;


}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
