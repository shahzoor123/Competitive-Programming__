#include <bits/stdc++.h>
using namespace std;

bool ispalindrom(string str) {
    string reverse_str = str;
    reverse(reverse_str.begin(), reverse_str.end());
    return str == reverse_str;
}

void solve() {
    string str;
    cin >> str;

    int hour = stoi(str.substr(0, 2));
    int minute = stoi(str.substr(3, 2)); 

    int counter = 0;
    for (int i = hour; i <= 23; i++) {
        for (int j = (i == hour ? minute : 0); j <= 59; j++) {
            string newStr = "";
            newStr += (i < 10 ? "0" : "") + to_string(i);
            newStr += ":";
            newStr += (j < 10 ? "0" : "") + to_string(j);

            if (ispalindrom(newStr)) {
                cout << counter << endl;
                return;
            }

            counter++;
        }
    }

     // Second loop: Start from 00:00 and go to the current time
    for (int i = 0; i <= hour; i++) {
        for (int j = 0; j <= (i == hour ? minute : 59); j++) {
            // Format the current time as hh:mm
            string currentTime = "";
            currentTime += (i < 10 ? "0" : "") + to_string(i);
            currentTime += ":";
            currentTime += (j < 10 ? "0" : "") + to_string(j);

            // Check if the current time is a palindrome
            if (ispalindrom(currentTime)) {
                cout << counter << endl;
                return;
            }

            // Increment the counter
            counter++;
        }
    }
}

int main() {
    solve();
    return 0;
}
