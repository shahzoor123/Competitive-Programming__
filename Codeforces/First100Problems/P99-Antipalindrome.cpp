#include <bits/stdc++.h>
using namespace std;


bool nonPalindrom(string s){

    string reverse_str = "";
    for (int i=s.size()-1;i>=0;i--){
        reverse_str += s[i];
    }

    return s != reverse_str;
}

void solve() {
    string s;
    cin >> s;


    if (nonPalindrom(s)) {
        cout << s.size() << endl;
        return;
    }
        


    vector<string> nonPalidromicStrings;

    for (int i=0;i<s.size();i++){
        string substrings = s.substr(0,i);

        if (nonPalindrom(substrings)){
            nonPalidromicStrings.push_back(substrings);
        }

    }



    if (nonPalidromicStrings.empty()){
        cout << 0 << endl;
        return;
    }

    int maximumSubstr = 0;

    for (int i=0;i<nonPalidromicStrings.size();i++){
        int temp = nonPalidromicStrings[i].size();

        if (maximumSubstr < temp){
            maximumSubstr = temp;
        }

    }

    cout << maximumSubstr << endl;




    
}

int main() {
    solve();
    return 0;
}
