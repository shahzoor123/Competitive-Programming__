#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s1,s2;
    cin >> s1 >> s2;

    int liss = 0;

    for (char c : s2){
        if(liss < (int)s1.size() && s1[liss] == c){
            liss++;
        }
    }


    cout << liss + 1 <<  endl;


    

}



int main(){


    solve();        


  return 0;
}