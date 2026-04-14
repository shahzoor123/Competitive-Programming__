#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n,k;
    cin >> n >> k;

    string password = "";
    string pattern = "";

    for (int i=0;i<n;i++){
        pattern += (char) ('a' + i);
    }

    int i = 0;

    while (password.size() < n){
        password += pattern[i % k];
        i++;
    }

    cout <<  password << endl;

}



int main(){


    solve();        


  return 0;
}