#include<bits/stdc++.h>
using namespace std;

bool isBeautiful(const string& tower) {
    cout << "Checking if tower '" << tower << "' is beautiful..." << endl;
    for (size_t i = 1; i < tower.length(); ++i) {
        if (tower[i] == tower[i - 1]) {
            cout << "Found consecutive blocks: " << tower[i - 1] << tower[i] << " -> Not beautiful!" << endl;
            return false; // Not beautiful
        }
    }
    cout << "Tower '" << tower << "' is beautiful!" << endl;
    return true; // Beautiful
}

void solve() {
    int n, m;
    cin >> n >> m;
    cout << "Test case - n: " << n << ", m: " << m << endl;

    string t1, t2;
    cin >> t1 >> t2;
    cout << "t1: " << t1 << ", t2: " << t2 << endl;
    
    bool f = false;
    cout << "Initial f: " << f << endl;

    for (int x = 0; x < 2; ++x) {
        string cs = t1, ct = t2;
        cout << "Iteration " << x + 1 << ": cs = " << cs << ", ct = " << ct << endl;

        for (int i = 0; i < n; ++i) {
            cout << "  Step " << i + 1 << ": cs = " << cs << ", ct = " << ct << endl;
            f |= isBeautiful(cs) && isBeautiful(ct);
            cout << "  After checking beauty: f = " << f << endl;

            ct.push_back(cs.back());
            cs.pop_back();
            cout << "  After move: cs = " << cs << ", ct = " << ct << endl;
        }

        swap(n, m);
        swap(t1, t2);
        cout << "After swap: n = " << n << ", m = " << m << ", t1 = " << t1 << ", t2 = " << t2 << endl;
    }

    cout << "Final f: " << f << endl;
    cout << (f ? "YES\n" : "NO\n");
}

int main() {
    int t;
    cin >> t;
    cout << "Number of test cases: " << t << endl;

    while (t--) {
        cout << "\nProcessing new test case..." << endl;
        solve();
    }

    return 0;
}


// Second Approach


// typedef long long ll;
 
// void solve() {
//     ll a, b;
//     cin >> a >> b;
//     string n, m;
//     cin >> n >> m;

//     reverse(m.begin(), m.end());
//     string p = n + m;
//     cout << p << endl;
//     ll cnt = 0;
//     for (ll i = 0; i + 1 < p.size(); i++)
//         if (p[i] == p[i + 1])
//             cnt++;
 	
//  	cout << cnt << endl;
//     if (cnt <= 1)
//         cout << "YES\n";
//     else
//         cout << "NO\n";
// }
 
// int main() {
 
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }