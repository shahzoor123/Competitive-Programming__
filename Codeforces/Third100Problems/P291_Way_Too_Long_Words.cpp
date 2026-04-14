#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str;
    cin >> str;

    if (str.size() <= 10) {
        cout << str << endl;
    } else {
        string result = "";
        int size = str.size() - 2;
        result += str[0];
        result += to_string(size);
        result += str.back();
        cout << result << endl;
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
