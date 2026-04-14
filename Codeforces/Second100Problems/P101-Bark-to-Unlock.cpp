#include <bits/stdc++.h>
using namespace std;

void solve() {
    string password;
    cin >> password;

    int n;
    cin >> n;


    vector<string> words;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        words.push_back(str);
   
    }


    for(int i = 0; i < n; i++) {
        if (words[i] == password){
            cout << "YES" << endl;
            return;
        }
    }


    bool first_char_found = false, second_char_found = false;

    for (int i=0; i<words.size();i++){
        
        if (words[i][1] == password[0]) first_char_found = true;
        if (words[i][0] == password[1]) second_char_found = true;

        if (first_char_found && second_char_found){
            cout << "YES" << endl;
            return;
        }


    }


    cout << "NO" << endl;



}

int main() {
    solve();
    return 0;
}
