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

        string s,c;
        cin>>s>>c;
    	int idx = 0;
    	for(int i = 0;i < (int)s.size();i++){
    		if(s[i] == '?') {
    			if(idx < (int)c.size()) s[i] = c[idx++];
    			else s[i] = 'a';
    		} else if(s[i] == c[idx]) ++idx;
    	}
    	if(idx >= c.size()) cout<<"YES\n"<<s<<"\n";
    	else cout<<"NO\n";

}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}