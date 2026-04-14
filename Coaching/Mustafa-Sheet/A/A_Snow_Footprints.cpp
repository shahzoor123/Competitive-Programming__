#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string d;
    cin >> d;

    int s = -1, t = -1;

    // Handle R direction
    for (int i = 0; i < n; i++) {
        if (d[i] == 'R') {
            s = i + 1; // Start block
            for (int j = i; j < n; j++) {
                if (d[j] == 'R') {
                    t = j + 2; // End block = last R index + 2
                }
            }
            break; // We handled R case, exit
        }
    }

    // If only L footprints exist
    if (s == -1) {
        for (int i = 0; i < n; i++) {
            if (d[i] == 'L') {
                s = i + 2; // She came from i+1 to i
                t = i + 1;
                break;
            }
        }
    }

    cout << s << " " << t << endl;
}

int main() {
    solve();
    return 0;
}
