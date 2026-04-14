#include <bits/stdc++.h>
using namespace std;


void solve(){

        string str;
        cin >> str; 

        int size = str.size();

        if (size == 1){
            cout << "NO" << endl;
            return;
        }

        bool allSame = true;
        for (int i=0;i<size;i++){
            if (str[i] != str[0]){
                allSame = false;
                break;
            }
        }

        if (allSame){
            cout << "NO" << endl;
            return;
        }

        cout << "YES" << endl;


        for (int i=0;i<size;i++){
            if (str[i] != str[0]){
                swap(str[0], str[i]);
                break;
            }
        }

        cout << str << endl;



}



int main() {

    int t;
    cin >> t;
    
    while (t--) {
        
        solve();
       
    }

    return 0;
}
