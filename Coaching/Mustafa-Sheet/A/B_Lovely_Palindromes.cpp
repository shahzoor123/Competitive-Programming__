#include <bits/stdc++.h>
using namespace std;


string reverse(string s){
    string result = "";

    for (int i = s.size() - 1 ; i >= 0;  i--) {
        result += s[i];
    }

    return result;
}


void solve(){
    string n;
    cin >> n;

    string ans = n + reverse(n);

    cout << ans << endl;
    

}



int main(){

    solve();        
  return 0;
}