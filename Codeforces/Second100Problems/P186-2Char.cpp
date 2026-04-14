#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; i++) {
        cin >> words[i];  // Input words
    }

    int maxLength = 0;

    // Iterate over all possible pairs of letters (including pairs like ('a', 'a'))
    for (char first = 'a'; first <= 'z'; first++) {
        for (char second = 'a'; second <= 'z'; second++) {
            int currentLength = 0;

            // Check each word
            for (const string& word : words) {
                // Count the frequency of each letter in the word
                vector<int> frequency(26, 0);
                for (char c : word) {
                    frequency[c - 'a']++;
                }

                // Count the number of distinct letters in the word
                int distinctLetters = 0;
                for (int i = 0; i < 26; i++) {
                    if (frequency[i] > 0) {
                        distinctLetters++;
                    }
                }

                // Check if the word uses only the two letters in the current pair
                bool isValid = true;
                for (int i = 0; i < 26; i++) {
                    if (frequency[i] > 0 && (i != (first - 'a') && i != (second - 'a'))) {
                        isValid = false;
                        break;
                    }
                }

                // If the word is valid, add its length to the current total
                if (isValid && distinctLetters <= 2) {
                    currentLength += word.length();
                }
            }

            // Update the maximum length
            maxLength = max(maxLength, currentLength);
        }
    }

    // Output the result
    cout << maxLength << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}