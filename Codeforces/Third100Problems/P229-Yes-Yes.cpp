#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string pattern = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes"; // Repeating pattern
    int n = s.size(); 

    
    for (int i = 0; i + n <= pattern.size(); i++) {
        if (pattern.substr(i, n) == s) { 
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
