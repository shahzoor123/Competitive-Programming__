#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int x = 0;
    int y = n - 1;


    int left = 0;
    int right = 0;

    while (x < y && y > x){

        if (s[x] == '0' && s[y] == '1' || s[x] == '1' && s[y] == '0'){
            right++;
            left++;
        }
        if (s[x] == '1' && s[y] == '1' || s[x] == '0' && s[y] == '0'){
            break;
        }
        x++;
        y--;

    }


    cout <<  n - (left + right) << endl;



    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
