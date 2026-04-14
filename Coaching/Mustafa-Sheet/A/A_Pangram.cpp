#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    map<char, bool> alphabetMap;

    for (char c='a';c<='z';c++){
        alphabetMap[c] = false;
    }


    for (int i=0;i<n;i++){
        for (char c='a';c<='z';c++){
            if(s[i] == c){
                alphabetMap[c] = true;     
            }
        }
    }


    for (char c='a';c<='z';c++){

        if(alphabetMap[c] == false){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;











    
}

int main(){

    solve();        
 

    return 0;
}
