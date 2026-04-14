#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str_a;
    cin >> str_a;

    string str_b;

    for (int i=str_a.size() - 1;i>=0;i--){
        if(str_a[i] == 'q'){
            str_b.push_back('p');
        }
        else if(str_a[i] == 'p'){
            str_b.push_back('q');
        }
        else{
            str_b.push_back('w');
        }
    }


    for (int i=0;i<str_b.size();i++){
        cout << str_b[i];
    }

    cout << endl;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
