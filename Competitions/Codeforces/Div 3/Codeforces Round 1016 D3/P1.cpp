#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;

    if(k % 2 == 0){
        cout << "NO" << endl;
    } 
    else{
        cout << "YES" << endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        solve(); // Call the solve function for each test case
    }

    return 0;
}
