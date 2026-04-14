#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+5;
ll a[N];

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

    vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

    long long X = 0;

	for(int i=0;i<n;i++){
        if(a[i] < 0 || a[i+1] < 0){
            X += a[i];
        }
        else{
            // X -= a[a+1];
            // a.erase(a[i+1]);
        }


	}
    

}

int main(){

    int t;
    cin >> t;
    while(t--){
    solve();
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout<<endl

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    // Your code here
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}