#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;


    if (s.find('*') == string::npos) {
        cout << (s == t ? "YES" : "NO") << endl;
        return 0;
    }


    if (s == "*") {
        cout << "YES" << endl;
        return 0;
    }

 
    if (m < n - 1) {
        cout << "NO" << endl;
        return 0;
    }


    int starPos = s.find('*');
    string prefix = s.substr(0, starPos);
    string suffix = s.substr(starPos + 1);

    // Check if t starts with prefix and ends with suffix
    if (t.substr(0, prefix.size()) == prefix && t.substr(m - suffix.size()) == suffix) {
        // Ensure that the prefix and suffix do not overlap in t
        if (prefix.size() + suffix.size() <= m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}