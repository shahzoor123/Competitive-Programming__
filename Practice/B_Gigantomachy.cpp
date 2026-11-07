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

    int n,m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];


    int movesOfBea = 0;
    int movesOfVer = 0;

    for(int i=0;i<n-1;i++){
        int diff = a[i] - a[i+1] + 1;
        movesOfBea += diff;
    }

    
    for(int i=0;i<m-1;i++){
        int diff = b[i] - b[i+1] + 1;
        movesOfVer += diff;
    }

    movesOfBea += a.back();
    movesOfVer += b.back();


    if(movesOfBea > movesOfVer || movesOfBea == movesOfVer){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}