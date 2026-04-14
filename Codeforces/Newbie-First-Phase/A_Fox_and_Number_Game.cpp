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
    int n,x;
    cin >> n;

    int num;
	cin>>num;
	for(int i=1;i<n;++i){
		cin>>x;
		num=__gcd(num,x);
	}
	cout<<num*n<<"\n";



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   solve();
    return 0;
}