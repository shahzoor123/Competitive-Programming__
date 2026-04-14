#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    string fullStr = "";

    while(n--){
        string s;
        cin >> s;

        fullStr += s;
    }

    int groups = 0;

    for(int i=0;i<fullStr.size();i++){
        if(fullStr[i] == '0' && fullStr[i+1] == '0'){
            groups++;
        }
        else if(fullStr[i] == '1' && fullStr[i+1] == '1'){
            groups++;
        }
    }

    cout << groups + 1  << endl;

    

}



int main(){




  solve();        


  return 0;
}