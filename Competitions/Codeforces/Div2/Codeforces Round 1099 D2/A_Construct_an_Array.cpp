#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
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

// Mathematical Approach

// void solve() {
//     int n;
//     cin >> n;

//     for(int i=0;i<n;i++){
//         cout << 2*i+1 << " ";
//     }

//     cout << endl;
// }


// Brute Force Approach

void solve() {
    int n;
    cin >> n;

    vector<int> ans;
    set<int> s;

    int last_element = 1;
    s.insert(1);
    ans.push_back(1);

    for(int i=2; i<=2*n && ans.size()<n; i++){
        if(!s.count(i) && !s.count(i + last_element)){
            s.insert(i);
            s.insert(i+last_element);
            last_element = i;
            ans.push_back(i);
        }
        else{
            continue;
        }
    }



    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
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