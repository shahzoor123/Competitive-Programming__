#include <iostream>
#include <string>
using namespace std;

int main() {
    string remix;
    cin >> remix;
    
    string word = ""; // to store characters of a word
    bool first = true; // to handle spaces between words

    for (int i = 0; i < remix.length(); ) {
        // Check if current substring is "WUB"
        if (i + 2 < remix.length() && remix[i] == 'W' && remix[i+1] == 'U' && remix[i+2] == 'B') {
            // If we were building a word, print it
            if (!word.empty()) {
                if (!first) cout << " "; // print space before next word
                cout << word;
                word = "";
                first = false;
            }
            i += 3; // skip "WUB"
        } else {
            word += remix[i];
            i++;
        }
    }

    // Print last word if any
    if (!word.empty()) {
        if (!first) cout << " ";
        cout << word;
    }

    cout << endl;
    return 0;
}
