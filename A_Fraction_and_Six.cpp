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
    int n , m; cin >> n >> m;

    string p , q; cin >> p >> q;

    sort(p.begin(), p.end());
    sort(q.begin(), q.end());


    string pResult  = "";

    int j = 0; 
    for(int i=0;i<n;i++){
        if(j < m && p[i] == q[j]){
            j++;
        }
        else{
            pResult.push_back(p[i]);
        }
    }

    if(j == m && pResult == "isx"){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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