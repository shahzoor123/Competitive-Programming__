#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int emptyCells = 0;

    for (int i=0;i<s.size();i++){
      if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
        cout << 2 << endl;
        return;
      }
      else{
        if(s[i] == '.'){
          emptyCells++;
        }
     
      }
    }

    cout << emptyCells << endl;


    

    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}