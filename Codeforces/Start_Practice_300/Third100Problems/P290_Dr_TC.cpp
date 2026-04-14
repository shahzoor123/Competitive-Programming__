#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for (int i=0;i<n;i++){

        string temp = s;
        if (temp[i] == '1') temp[i] = '0';
        else temp[i] = '1';

        for (int j=0;j<n;j++){

            if (temp[j] == '1') count++;

        }
    }

    cout << count << endl;


}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
