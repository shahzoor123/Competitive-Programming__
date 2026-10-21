#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout<<endl
#define f(i, n) for (ll i = 0; i < n; ++i)

template <typename T>
void prnt(const T &val) {
    if (std::is_arithmetic<T>::value || std::is_same<T, string>::value) {
        cout << val << '\n';
    } else {
        for (const auto &x : val)
            cout << x << ' ';
        cout << '\n';
    }
}

// Problem Statement
/*
  
*/

// Small Observations
/*
  
*/

// Claims on Algo
/*
  
*/
void solve() {
    int n;
    cin >> n;

    map<int,int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    vector<pair<int,int>> v(freq.rbegin(), freq.rend());

    int printed = 0;   
    while (printed < n) {
        for (auto& p : v) {
            if (p.second > 0) {
                cout << p.first << " ";
                p.second--;
                printed++;
            }
        }
        
    }

    cout << endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}