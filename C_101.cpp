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

    vector<int> a(n);
    for(int &x : a) cin >> x;

    int first = -1;
    int last = -1;

    for(int i=0;i<n; i++){
        if(a[i] != 0){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }


    if(first != -1 && a[first] == -1){
        a[first] = 1;
    }

    if(last != -1 && a[last] == -1){
        a[last] = 1;
    }

    for(int i=0;i<n; i++){
       if(a[i] == -1){
            cout << 0 << " ";
       }
       else{
        cout << a[i] << " ";
       }
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