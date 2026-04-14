#include <iostream>
using namespace std;

void solve() {
    string str;
    cin >> str;

    size_t n = str.size();

    for (size_t i = 0; i < n - 1;) {
        if (str[i] == str[i + 1]) {
            if (i > 0) {
                str[i] = str[i - 1];
            } else {
                if (i + 2 < n) {
                    str[i] = str[i + 2];
                }
            }

            str.erase(i + 1, 1);
            n--;

            if (i > 0) {
                i--;
            }
        } else {
            i++;
        }
    }

    cout << str.size() << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
