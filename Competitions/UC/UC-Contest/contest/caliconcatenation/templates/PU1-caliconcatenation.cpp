#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    string calico_capital = "CALICO";
    string calico_lower = "calico";

    while (t--) {
        string str;
        cin >> str;

        if (str.empty()) {
            cout << str << endl; // Handle empty string case
            continue; // Skip to the next iteration
        }

        if (str[0] == 'o') {
            for (int i = 1; i < str.size(); i++) {
                calico_capital.push_back(str[i]);
            }
            str = calico_capital;
            cout << str << endl;
        } 

        else if (str.substr(0, 2) == "co") {
            for (int i = 2; i < str.size(); i++) {
                calico_capital.push_back(str[i]);
            }
            str = calico_capital;
            cout << str << endl;
        }

         else if (str.substr(0, 3) == "ico") {
            for (int i = 3; i < str.size(); i++) {
                calico_capital.push_back(str[i]);
            }
            str = calico_capital;
            cout << str << endl;
        }

         else if (str.substr(0, 4) == "lico") {
            for (int i = 4; i < str.size(); i++) {
                calico_capital.push_back(str[i]);
            }
            str = calico_capital;
            cout << str << endl;
        }

         else if (str.substr(0, 5) == "alico") {
            str = calico_capital; // Assign directly to calico_capital
            cout << str << endl;
        } 

        else if (str.substr(0, 6) == "calico") {
            for (int i = 6; i < str.size(); i++) {
                calico_capital.push_back(str[i]);
            }
            str = calico_capital;
            cout << str << endl;
        }

         else {
            cout << str << endl; // Output unchanged string
        }

        // Reset calico_capital for the next test case
        calico_capital = "CALICO";
    }

    cout << endl;
}
