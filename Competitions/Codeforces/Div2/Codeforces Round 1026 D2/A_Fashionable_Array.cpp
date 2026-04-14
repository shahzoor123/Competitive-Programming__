#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    sort(a.begin(), a.end());

    int maxLength = 1;
    
   
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if ((a[i] + a[j]) % 2 == 0) {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    int operations = n - maxLength;

    cout << operations << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        solve();        
    }   

    return 0;
}
