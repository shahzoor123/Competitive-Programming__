#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    
    int balance = 0;
    int pattren = 0;
    
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            balance++;
        }
        else{
            balance--;
        }

        if(balance == 0){
            pattren++;
        }
    }
    
    if(pattren > 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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