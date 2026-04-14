#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int k;
    cin >> k;
    int count = 0;
    int num = 1;

    while (true) {
        if (num % 3 != 0 && num % 10 != 3) {
            count++;
            if (count == k) {
                cout << num << endl;
                return;
            }
        }
        num++;
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
