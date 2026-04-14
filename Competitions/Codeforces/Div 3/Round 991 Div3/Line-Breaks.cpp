#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int totalLength = 0;
        int maximum_number_of_words = 0;

        bool firstWordTooLarge = false;  // Flag to check if first word is too large

        // Process each word
        for (int i = 0; i < n; i++) {
            string str;
            cin >> str;
            int size = str.size();

            // Check if the first word is too large
            if (i == 0 && size > m) {  // Only check the first word
                firstWordTooLarge = true;
                break;  // Stop processing further words
            }

            // If the first word is not too large, continue processing
            if (!firstWordTooLarge && totalLength + size <= m) {
                totalLength += size;  // Add the word to the first strip
                maximum_number_of_words++;  // Increase the count of words
            }
        }

        // If the first word was too large, output 0
        if (firstWordTooLarge) {
            maximum_number_of_words = 0;
        }

        // Output the maximum number of words that fit
        cout << maximum_number_of_words << endl;
    }

    return 0;
}
