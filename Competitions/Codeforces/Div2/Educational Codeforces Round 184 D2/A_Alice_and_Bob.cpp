#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t,n,a,v;

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
    int n,a;
    cin >> n >> a;

    ll cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        if(v<a) cnt1++;
        else if(v>a) cnt2++;
    }


    if(cnt1 > cnt2){
        cout << a-1 << endl;
    }
    else{
        cout << a+1 << endl;
    }


    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}