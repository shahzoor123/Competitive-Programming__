#include <bits/stdc++.h>
using namespace std;


void solve(){
    string n;
    cin >> n;

    for (int i=0;i<n.size();i++){

        int digit = n[i] - '0';
        int invert = 9 - digit;

        if(i==0 && invert == 0){
            cout << digit;
            continue;
        }

        if(invert < digit){
            cout << invert;
        }
        else{
            cout << digit;
        }
    }

    cout << endl;


}



int main(){


  solve();        
  return 0;
}