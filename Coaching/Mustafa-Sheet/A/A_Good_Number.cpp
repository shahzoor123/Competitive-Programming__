#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin >> n >> k;

    int count = 0;

    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        string digits = to_string(x);

        bool isGood = true;

        for (int j=0;j<=k;j++){
            char c = j + '0';
            
            if(digits.find(c) == string::npos){
                isGood = false;
                break;
            }
        }

        if(isGood){
            count++;
        }
    }

    cout << count << endl;
 

}


int main(){

    solve();        
  return 0;
}