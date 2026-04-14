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

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<int,int> freq;

    for(char c : s){
        freq[c]++;
    }

    for(auto l : freq){
        if(l.second % 2 != 0){
            cout << "NO" << endl;
            return;
        }
    }

    vector <char> stack;
    for(int i=0;i<n;i++){
        if(!stack.empty() && stack.back() == s[i]){
            stack.pop_back();
        }
        else{
            stack.push_back(s[i]);
        }
    }

    if(stack.empty()){
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