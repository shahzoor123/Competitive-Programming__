#include <bits/stdc++.h>
using namespace std;



bool isPalindrome(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
    return s == std::string(s.rbegin(), s.rend()); 
}


void solve() {
    string s;
    cin >> s;


    vector<char> alphabets;
    
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        alphabets.push_back(ch);
    }


    
    for (int i=0;i<=s.size();i++) {
        for (char ch : alphabets) {

            string temp = s;
            temp.insert(temp.begin() + i, ch);

            if (isPalindrome(temp)){
                cout << temp << endl;
                return;
            }
        }
    }



    cout << "NA" << endl;
   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
