#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    string encoded;
    cin >> encoded;


    string decoded = "";

    for(int i=n-1; i>=0; --i){
        char ch = encoded[i];
        int pos = decoded.length() / 2;
        decoded.insert(decoded.begin() + pos, ch);
      
    }

    cout << decoded << endl;

}



int main(){

  
  solve();        
  return 0;
}