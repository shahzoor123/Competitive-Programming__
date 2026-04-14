#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin >> str; 

    int differ = 0;
    string compare = "codeforces";

    for(int i=0;i<10;i++){
        if (str[i] != compare[i]){
            differ++;
        }
    } 

    cout << differ << endl;
    
    

}


int main() {

    int t;
    cin >> t;
    
    while (t--) {
        
        solve();
       
    }

    return 0;
}
