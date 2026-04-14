#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    if (s.find("FFT") == string::npos && s.find("NTT") == string::npos) {
        cout << s << endl;
        return;
    }


    map<char, int> freq;
    for (char c : s) freq[c]++;

    string final = "";

    for (char c = 'A'; c <= 'Z'; c++) {
        if (c != 'F' && c != 'N' && c != 'T') {
            final += string(freq[c], c);
        }
    }

    final += string(freq['T'], 'T');
    final += string(freq['F'], 'F');
    final += string(freq['N'], 'N');

    cout << final << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
