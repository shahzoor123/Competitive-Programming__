#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--){
        
        long long k;
        cin >> k;

        if (k % 6 == 1 ||  k % 6 == 4){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}