#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  
  
  
*/

// Claims on Algo
/*
  
  
*/


void solve(){

    long long n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];


    vector<long long> odd, even;

    for (long long x : a) {
        if (x % 2 == 0) 
            even.push_back(x);
        else 
            odd.push_back(x);
    }

    if(odd.size() == 0){
        for (int i=0;i<n;i++){
            cout << 0 << " ";
        }
        cout << endl;
        return;
    }

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    if(even.size() == 0){
        for(int k = 1; k <= n; k++) {
        if(k & 1) {
            cout << odd.back() << ' ';
        }
        else{
            cout << 0 << ' ';
        }
        }
        return;
    }

    long long score = odd.back();
    vector<long long> ans(n+1);
 
    ans[1] = score;
 
    for(int k = 2; k <= n; k++) {
        if(even.size() == 0) {
            ans[k] = ans[k-2];
        }
        else{
            ans[k] = ans[k-1] + even.back();
            even.pop_back();
        }
    }
 

    if (accumulate(a.begin(), a.end(), 0LL) % 2 == 0) {
        ans[n] = 0;
    }

    
    for (int i=1;i<=n;i++){
        cout << ans[i] << " ";

    }

    cout << endl;
  
    

    
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
  
    return 0;
}