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

    vector<vector<int>> adjacent(n+1);

    for(int i=2;i<=n;i++){
        int p;
        cin >> p;
        adjacent[p].push_back(i);
    }

    vector<bool> dam(n+1);
    int m;
    cin >> m;

    for(int i=0;i<m;i++){
        int d;
        cin >> d;
        dam[d] = true;
    }

    vector<int> cameras;

    function<void(int)> dfs = [&] (int s){
        for(auto u:adjacent[s]){
            dfs(u);
        }
        if(dam[s]){
            cameras.push_back(s);
        }
    };

    dfs(1);

    cameras.pop_back();

    cout << cameras.size() << ' ';
    for (auto u:cameras){
        cout << u <<  ' ';
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