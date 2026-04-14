#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    string currentStr = "";
    bool found = false; // To track if any valid substring is found

    for (int i = 0; i < s2.size(); i++) {
        bool charFound = false;

        for (int j = 0; j < s1.size(); j++) {
            if (s2[i] == s1[j]) {  
                currentStr += s2[i];
                charFound = true;
                break;  // Stop once a matching character is found
            }
        }

        // If a character does not exist in s1, reset currentStr
        if (!charFound) {
            currentStr = "";
        }

        // Check if currentStr contains all characters of s1 as a permutation
        if (currentStr.size() >= s1.size()) {
            string temp = currentStr.substr(currentStr.size() - s1.size()); // Get last 's1.size()' chars
            string sortedTemp = temp, sortedS1 = s1;
            sort(sortedTemp.begin(), sortedTemp.end());
            sort(sortedS1.begin(), sortedS1.end());

            if (sortedTemp == sortedS1) {
                found = true;
                break; // No need to check further
            }
        }
    }

    cout << (found ? "YES" : "NO") << endl; // Print final result
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
