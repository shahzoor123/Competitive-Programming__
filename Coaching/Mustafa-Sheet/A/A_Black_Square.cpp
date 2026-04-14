#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int totalCalories = 0;

    for (int i=0;i<s.size();i++){
        if(s[i] == '1'){
            totalCalories += a1;
        }
        else if  (s[i] == '2'){
            totalCalories += a2;
        }
        else if (s[i] == '3'){
            totalCalories += a3;
        }
        else{
            totalCalories += a4;
        }
    }


    cout << totalCalories << endl;

    

    
}

int main(){


    solve();        
  

    return 0;
}
