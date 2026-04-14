#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> numberWords = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
        "seventeen", "eighteen", "nineteen"
    };

    vector<string> tensWords = {
        "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    if (n <= 19) {
        cout << numberWords[n] << endl;
    }

    else if (n >= 20 && n <= 29) {
        if (n == 20) {
            cout << tensWords[0] << endl;
            return;
        }
        string str = to_string(n);
        cout << tensWords[0] << "-" << numberWords[str[1] - '0'] << endl;
    }

    else if (n >= 30 && n <= 39) {
        if (n == 30) {
            cout << tensWords[1] << endl;
            return;
        }
        string str = to_string(n);
        cout << tensWords[1] << "-" << numberWords[str[1] - '0'] << endl;
    }

    else if (n >= 40 && n <= 49) {
        if (n == 40) {
            cout << tensWords[2] << endl;
            return;
        }
        string str = to_string(n);
        cout << tensWords[2] << "-" << numberWords[str[1] - '0'] << endl;
    }

    else if (n >= 50 && n <= 59) {
        if (n == 50) {
            cout << tensWords[3] << endl;
            return;
        }
        string str = to_string(n);
        cout << tensWords[3] << "-" << numberWords[str[1] - '0'] << endl;
    }

    else if (n >= 60 && n <= 69) {
        if (n == 60) {
            cout << tensWords[4] << endl;
            return;
        }
        string str = to_string(n);
        cout << tensWords[4] << "-" << numberWords[str[1] - '0'] << endl;
    }

    else if (n >= 70 && n <= 79) {
        if (n == 70) {
            cout << tensWords[5] << endl;
            return;
        }
        string str = to_string(n);
        cout << tensWords[5] << "-" << numberWords[str[1] - '0'] << endl;
    }

    else if (n >= 80 && n <= 89) {
        if (n == 80) {
            cout << tensWords[6] << endl;
            return;
        }
        string str = to_string(n);
        cout << tensWords[6] << "-" << numberWords[str[1] - '0'] << endl;
    }
    else if (n >= 90 && n <= 99) {
        if (n == 90) {
            cout << tensWords[7] << endl;
            return;
        }
        string str = to_string(n);
        cout << tensWords[7] << "-" << numberWords[str[1] - '0'] << endl;
    }
   
}

int main() {
 
    solve();
   
    return 0;
}