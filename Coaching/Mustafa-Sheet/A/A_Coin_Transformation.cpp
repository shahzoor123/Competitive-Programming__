#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin >> n;

    long long coins = 1;
    while (n > 3) {
        n /= 4;
        coins *= 2;
    }
    cout <<  coins << endl;

    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}