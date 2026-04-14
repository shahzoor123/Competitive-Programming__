#include <bits/stdc++.h>
using namespace std;


void solve(){
    
    string s;
    getline(cin, s);

    set<char> letters;
    int count = 0;

    for (int i=0;i<s.size();i++){
        if(s[i] >= 'a' && s[i] <= 'z'){ 
            count++;
            letters.insert(s[i]);
        }
    
    }

    int setSize = letters.size();

    if(setSize == count){
        cout << count << endl;
    }
    else{
        cout << setSize << endl;
    }


    

}



int main(){

 
  solve();        
 

  return 0;
}