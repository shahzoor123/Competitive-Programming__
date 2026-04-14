#include <bits/stdc++.h>
using namespace std;

string getAns(string& s){

    string word = "";
    word += s[0];

    for (int i=1;i<s.size();i++){
        if(s[i] != s[i-1]){
            word += s[i];
        }
    }

    return (word == "meow") ? "YES\n" : "NO\n";

}

int main() 
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        string s; cin >> s;
 
        for (char& c : s)
        c = tolower(c);
        
        cout << getAns(s);
    }
 
    return 0;
}