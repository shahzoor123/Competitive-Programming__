#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    vector<int> fs(26, 0), ft(26, 0);

    for (char c : s) fs[c - 'a']++;
    for (char c : t) ft[c - 'a']++;

    for (int i = 0; i < 26; i++) {
        if (fs[i] > ft[i]) {
            cout << "Impossible\n";
            return;
        }
    }

    vector<char> t_prime; 
    for (int i = 0; i < 26; i++) {
        int rem = ft[i] - fs[i];
        for (int j = 0; j < rem; j++) {
            t_prime.push_back('a' + i);
        }
    }

    sort(t_prime.begin(), t_prime.end());


    string result = "";
    int i = 0, j = 0;


    while (i < s.size() || j < t_prime.size()) {
        if (i == s.size()) {           
            result += t_prime[j++];
        } else if (j == t_prime.size()) { 
            result += s[i++];
        } else {
            if (s[i] <= t_prime[j]) { 
                result += s[i++];
            } else {               
                result += t_prime[j++];
            }
        }
    }

    cout << result << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
