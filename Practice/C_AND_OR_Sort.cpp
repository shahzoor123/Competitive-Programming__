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

    ll n;
    cin >> n;

    string s;
    cin >> s;



    if(s[0] == '1'){
        ll count  = 0 ;
        for(const auto &x:s)
            count+=(x=='0');
        cout<<count<<endl;
        return;
    }

    vector<ll> oneBefore(n), zeroAfter(n);

    ll one = 0;

    for(ll i = 0; i < n; i++){
          oneBefore[i] = one;
          if(s[i] == '1'){
                one++;
          }
    }

    ll zero = 0;
    for(ll i = n-1; i >= 0; i--){
        if(s[i] == '0')
                zero++;
        zeroAfter[i] = zero;
    }

    
    ll answer = min(one,zero);

    for(ll i = 0; i < n; i++){
        answer = min(answer, oneBefore[i]+zeroAfter[i]);
        
    }

    cout << answer << endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}