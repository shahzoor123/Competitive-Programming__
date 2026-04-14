#include <bits/stdc++.h>
using namespace std;


void solve(){
    char direction;
    cin >> direction;

    string s;
    cin >> s;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string result = "";

    for (int i=0;i<s.size();i++){
        for (int j=0;j<keyboard.size();j++){
          
            if(s[i] == keyboard[j]){
                if(direction == 'R'){
                    result += keyboard[j-1];
                }
                else{
                    result += keyboard[j+1];
                }
              
            }
        }
    }


    cout << result << endl;


}



int main(){


  solve();        
  return 0;
}