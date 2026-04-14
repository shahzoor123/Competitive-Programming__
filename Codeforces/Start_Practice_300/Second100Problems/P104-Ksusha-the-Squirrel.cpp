#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, c = 0;
    string s;
    cin >> n >> k >> s;
    for(int i = 0; i < n; i++) {
        
        if (s[i] == '#') {
            c++;
        } else {
            c = 0;
        }

        if(c == k) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}