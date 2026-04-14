#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin >> n >> k;

    string result = "";

    int zeros = n-k;

    while (zeros > 0){

        result += '0';
        zeros--;

    }

    while (k > 0){

        result += '1';
        k--;

    }


    cout << result << endl;



}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}