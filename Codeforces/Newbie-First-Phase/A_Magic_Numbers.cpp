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
    string a;
	cin >> a;

	for (int i = 0; i < a.length();) {
 
		if ( a[i] == '1') {
			i++;
			if (a[i] == '4') {
				i++;
				if ( a[i] == '4') {
 
					i++;
				}
			}
		} else {
			cout << "NO";
            return;
		}
	}
	cout << "YES";

    

}



int main(){

 
  solve();        
  

  return 0;
}