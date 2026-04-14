#include <bits/stdc++.h>
using namespace std;


void solve(){
    string str;
    cin >> str;

    string result = "";

    for (int i=0;i<str.size();i++){
        if(str[i] == '.'){
            result += '0';
        }
        else if (str[i] == '-' && str[i+1] != '-'){
            result += '1';
            i++;
        }
        else{
            result += '2';
            i++;
        }
    }

    cout << result << endl;

    

}



int main(){

  solve();        


  return 0;
}