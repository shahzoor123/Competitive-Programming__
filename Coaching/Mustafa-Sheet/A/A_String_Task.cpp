#include <bits/stdc++.h>
using namespace std;


bool isVowel(char c) {
    string vowels = "aoyeui";
    return vowels.find(c) != string::npos;
}

void solve(){
    string s;
    cin >> s;

    string result = "";

    for (char c : s){
        c = tolower(c);

        if(isVowel(c)) continue;

        result += '.';
        result += c;
    }

    cout << result << endl;

    

}



int main(){

 
    solve();        
  return 0;
}