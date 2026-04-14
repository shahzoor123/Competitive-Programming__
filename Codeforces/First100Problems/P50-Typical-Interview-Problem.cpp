#include <bits/stdc++.h>
using namespace std;

string solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string FB_STR = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFB";
    int size = FB_STR.size();

    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            string substr = FB_STR.substr(i,s.size());
            if (substr == s){
                return "YES" ;
            }
        }
        
    }

    return "NO" ;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl; 
    }

    return 0;
}
