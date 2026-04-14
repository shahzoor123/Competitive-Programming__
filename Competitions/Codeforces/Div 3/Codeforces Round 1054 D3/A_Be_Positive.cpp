#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int zeros = 0,ones = 0,negatives = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x < 0){
            negatives++;
        }
        else if(x == 0) {
            zeros++;
        }
        else{
            ones++;
        }
    }



    int miniOperations = zeros;

    if (negatives % 2 == 1) {
        miniOperations += 2;
    }


    cout << miniOperations << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
