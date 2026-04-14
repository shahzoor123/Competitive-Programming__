#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    unordered_map<char, int> ballonCounter;
    for (char c : s){
        ballonCounter[c]++;
    }

    int max_frequancy = 0;
    for (auto pair : ballonCounter){
        max_frequancy = max(max_frequancy , pair.second);

    }

    if (max_frequancy > k) cout << "NO" << endl;
    else cout << "YES" << endl;
    
}

int main() {
    solve();
    return 0;
}
