#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> phone_numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> phone_numbers[i];
    }

    int codeLenght = 0;

    for (int i=0;i<phone_numbers[1].size();i++) {
        char current_char = phone_numbers[0][i];
        bool is_common = true;

        for (int j=1;j<phone_numbers.size();j++) {
                if (i >= phone_numbers[j].size() || phone_numbers[j][i] != current_char){
                    is_common = false;
                    break; 
                }
        }

        if (is_common) {
                codeLenght++;

        } else {
                break;
        }
    }

    if(codeLenght){
        cout << codeLenght << endl;
    }
    else{
        cout << 0 << endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
