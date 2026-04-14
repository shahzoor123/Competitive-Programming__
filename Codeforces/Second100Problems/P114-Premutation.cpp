#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    // Step 1: Read the input array
    vector<vector<int>> arr(n, vector<int>(n - 1));
    cout << "Input Matrix:" << endl; // Debug: Print the input matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) { // Debug: Display the input matrix
        for (int j = 0; j < n - 1; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Step 2: Use a map to count the occurrences of the first column values
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i][0]]++;
    }

    cout << "Frequency Map of First Column:" << endl; // Debug: Print frequency map
    for (auto x : mp) {
        cout << "Value: " << x.first << ", Count: " << x.second << endl;
    }

    // Step 3: Identify the first two numbers
    vector<int> ans;
    int nxt = -1;

    for (auto x : mp) {
        if (x.second == n - 1) {
            ans.push_back(x.first); // First number
        } else {
            nxt = x.first; // Second number
        }
    }

    cout << "Initial Sequence (First Two Numbers): ";
    for (int x : ans) cout << x << " ";
    cout << nxt << endl;

    // Step 4: Build the rest of the sequence
    ans.push_back(nxt);
    for (int i = 1; i < n - 1; i++) {
        int prev = nxt;
        for (int j = 0; j < n; j++) {
            if (arr[j][i] != prev) {
                nxt = arr[j][i];
            }
        }
        ans.push_back(nxt);

        cout << "Sequence after column " << i + 1 << ": ";
        for (int x : ans) cout << x << " ";
        cout << endl;
    }

    // Step 5: Print the final sequence
    cout << "Final Sequence: ";
    for (int a : ans) {
        cout << a << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
