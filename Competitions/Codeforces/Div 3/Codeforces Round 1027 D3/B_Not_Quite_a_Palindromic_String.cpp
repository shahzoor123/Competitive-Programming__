#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    int zeros = 0;
    int ones = 0;

    for (int i=0;i<n;i++){
        if(s[i] == '0'){
            zeros++;
        }
        else{
            ones++;
        }
    }

    if(k > n/2){
        cout << "NO" << endl;
        return;
    }

    int badpairs = n/2 - k;

    if(zeros < badpairs || ones < badpairs){
        cout << "NO" << endl;
        return;
    }

    int remainingZeros = zeros - badpairs;
    int remainingOnes = ones - badpairs;


    if ((remainingZeros + remainingOnes) == 2*k && remainingZeros % 2 == 0 && remainingOnes % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;  
    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}