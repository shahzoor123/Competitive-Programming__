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

    bool allOnes = true;

    for(int i=0;i<n;i++){
        if(a[i] != 1){
            allOnes = false;
        }
    }

    if(allOnes){
        cout << -1 << endl;
        return;
    }

    
    if(n == 2){
        cout << a[n-1] + a[0] - 1 << endl;
        return;
    }
    
    bool canSplit = false;

    for(int i=1;i<n-1;i++){
        if(a[i] >= 2) canSplit = true;
    }


    int betweenSum = 0;

    for(int i=1;i<n-1;i++){
        betweenSum += a[i];
    }

    if(canSplit){
        cout << a[n-1] + betweenSum + a[0] - 1 << endl; 
    }
    else{
        cout << a[n-1] + betweenSum  + a[0] - (n-1) << endl; 
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