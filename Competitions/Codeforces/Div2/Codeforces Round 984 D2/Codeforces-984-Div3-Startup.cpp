#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        string s; // Binary string
        cin >> s;

        int size =  s.size();
        

        int q; // Number of queries
        cin >> q;

        string substring = "1100"; // The substring to check

        while (q--) {
            int i; // Index to modify (1-based)
            char v; // New value (0 or 1)
            cin >> i >> v;

            // cout << "now - q--" << i << " "<< v << endl;

            s[i - 1] = v;


            // Check if the substring exists in the string
            if (s.find(substring) != string::npos) {
                cout << "YES" << endl; // Substring found
            } else {
                cout << "NO" << endl; // Substring not found
            }

        }
    }

    return 0;
}
