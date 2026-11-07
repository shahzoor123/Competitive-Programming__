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

        long long a, b, c;
        cin >> a >> b >> c;

        if ( a == b && b == c){
            cout << 0 << '\n';
            return;
        }

        long long s = a + b + c;

        if(s % 3 != 0){
            cout << -1 << '\n';
            return;
        }

        long long n = s / 3;
        long long  m = 0;

        if(a != n) m++;
        if(b != n) m++;
        if(c != n) m++;

        cout << m-1 << '\n';


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}

