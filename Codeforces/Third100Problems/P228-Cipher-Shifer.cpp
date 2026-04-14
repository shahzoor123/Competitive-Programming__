#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        int flag = 1;
        char c;
        for (int i = 0; i < n; ++i) {
            if (flag) {
                c = s[i];
                flag = 0;
            }
            else {
                if (s[i] == c) {
                    cout << c;
                    flag = 1;
                }
            }
        }
        cout << endl;
    }
}