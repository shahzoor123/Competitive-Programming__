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

    string a, b;
    cin >> a >> b;

    int count = b.size() - a.size();

    string s = "";

    for(int i=0;i<count;i++){
        s += '0';
    }

    s += a;
 
    ll indx = -1;

    for(int i=0;i<b.size();i++){
        if(s[i] != b[i]){
            indx = i;
            break;
        }
    }

    if(indx == -1){
        cout << 0 << endl;
    }
    else{
        int len = (b.size()) - indx-1;
        int ans = 9 * len;
        int val = abs(b[indx] - s[indx]);

        ans+= val;
        cout << ans << endl; 
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