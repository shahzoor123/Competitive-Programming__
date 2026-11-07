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

int calc(ll x) {
	for (int i = 0; i < 100; ++i) {
		int s = 0;
		while (x > 0) {
			int d = x % 10;
			s += d * d;
			x /= 10;
		}
		x = s;
	}
	return (int)x;
}


void solve() {

    ll n;
    cin >> n;

    vector<int> a(200, 0);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a[calc(x)]++;
    }
    

    ll totalPairs = 0;

    for (int c : a) {
        totalPairs += 1ll * c * (c - 1) / 2;
    }


    cout << totalPairs <<endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}