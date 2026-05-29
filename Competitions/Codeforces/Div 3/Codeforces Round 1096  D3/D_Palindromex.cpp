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

// Problem Statement
/*
  
*/

// Small Observations
/*
  
*/

// Claims on Algo
/*
  
*/

void findZeros(vector<int>& a, int n, int& x, int& y) {
    x = -1; y = -1;
    for (int i = 0; i < 2 * n; i++) {
        if (a[i] == 0) {
            if (x == -1) x = i;
            else y = i;
        }
    }
}

set<int> buildSet(int n) {
    set<int> s;
    for (int i = 0; i <= n; i++) s.insert(i);
    return s;
}

int expandMex(vector<int>& a, int n, int l, int r) {
    set<int> s = buildSet(n);
    while (l >= 0 && r < 2 * n && a[l] == a[r]) {
        s.erase(a[l]);
        if (l != r) s.erase(a[r]);
        l--; r++;
    }
    return *s.begin();
}

int getAnswer(vector<int>& a, int n, int x, int y) {
    int mid1 = (x + y) / 2;
    int mid2 = (x + y + 1) / 2;
    return max({ expandMex(a, n, x, x),
                 expandMex(a, n, y, y),
                 expandMex(a, n, mid1, mid2) });
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int &x : a) cin >> x;

    int x, y;
    findZeros(a, n, x, y);

    cout << getAnswer(a, n, x, y) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}