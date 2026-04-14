#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        vector<int> sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());
        int max1 = sorted_s[n - 1];  // Largest element
        int max2 = sorted_s[n - 2];  // Second largest element

        for (int i = 0; i < n; i++) {
            if (s[i] == max1) {
                cout << s[i] - max2 << " ";
            } else {
                cout << s[i] - max1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
