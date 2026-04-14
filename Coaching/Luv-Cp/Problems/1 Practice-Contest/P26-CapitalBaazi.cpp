#include <iostream>
#include <string>
#include <cctype> // Include this header for toupper

using namespace std;

int main() {
    string line;
    getline(cin, line);  // Correctly read the entire line of input

    string word = "";

    for (char ch : line) {
        if (ch == ' ') {  // Corrected from '' (empty character literal) to ' ' (space)
            if (!word.empty()) {
                cout << word << endl; // Print the word found
                word = ""; // Reset the word
            }
        } else {
            word += toupper(ch);// Convert character to uppercase before adding
        }
    }

    // Print the last word if there's any
    if (!word.empty()) {
        cout << word << endl; // Print the last word
    }

    return 0;
}
