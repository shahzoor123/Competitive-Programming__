#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    while(s.size() > 1){

        for (int i=0;i+1<s.size();i++){
            if(s[i] == 'Y' && s[i+1] == 'Y'){
                cout << "NO" << endl;
                return;
            }
        }

        bool merged = false;

        for (int i=0;i+1<s.size();i++){
            if(s[i] == 'N' && s[i+1] == 'N'){
                s.erase(i,2);
                s.insert(i, "N");
                merged = true;
                break;

            }
        }

        if (merged) continue;


        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] != s[i + 1]) {
                s.erase(i, 2);
                s.insert(i, "Y");
                merged = true;
                break;
            }
        }

        


    }

    cout << "YES\n";
    

}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
