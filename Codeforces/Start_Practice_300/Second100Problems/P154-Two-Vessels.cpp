#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;


    int maximum = max(a,b);
    int minimum = min(a,b);

    int difference = maximum - minimum;

    int count = 0;

    while (maximum > minimum) {

        minimum += c;
        maximum -= c;

        count++;

        if (maximum == minimum) {
            cout << count << endl;
            return;
        }
    }

    cout << count << endl;

}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
