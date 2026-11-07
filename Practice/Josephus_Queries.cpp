#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout << endl
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

ll solve(ll n, ll k) {

    if (n == 1) {
        return 1;
    }

    if (k <= n / 2) {
        return 2 * k;
    }

    ll r = solve(n / 2, k - n / 2);

    if (n % 2 == 0) {
        return 2 * r - 1;
    } else {
        return 2 * r + 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll q;
    cin >> q;

    while (q--) {
        ll n, k;
        cin >> n >> k;

        cout << solve(n, k) << '\n';
    }

    return 0;
}