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
    char c;
    cin >> n >> c;

    string s;
    cin >> s;


    int ops = 0;

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            if (s[left] != c && s[right] != c) {
                ops += 2; 
            }
            else {
                ops++;
            }
        }
        left++;
        right--;
    }

    cout << ops << endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}