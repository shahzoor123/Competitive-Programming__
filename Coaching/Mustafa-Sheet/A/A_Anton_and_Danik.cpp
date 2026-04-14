#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int D = 0;
    int A = 0;

    for (int i=0;i<n;i++){
        if(s[i] == 'D'){
            D++;
        }
        else{
            A++;
        }
    }

    if(D > A){
        cout << "Danik";
    }
    else if (D < A){
        cout << "Anton";
    }
    else{
        cout << "Friendship";
    }

    

}



int main(){

    solve();        
 

  return 0;
}