#include <bits/stdc++.h>
using namespace std;

int main() {

    // 4 ---- UnOrdered Sets ---- also O(1) time comp we can use where order does not matter

    // unordered_set<string> s;

    // s.insert("bc");
    // s.insert("aa");
    // s.insert("ac");
    // s.insert("aa");
    // s.erase("aa");

    // auto it = s.find("abc");

    // if (it != s.end()){
    //     cout << (*it);
    // }

    // for (string value : s){
    //     cout << value << endl;
    // }



    // 1 question on unordered set if string is present


    unordered_set<string> s;

    int n;
    cin >> n;

    for (auto i=0;i<n;i++){
        string str;
        cin >> str;
        s.insert(str);
    }

    int q;
    cin >> q;


    while (q--){
        string query;
        cin >> query;

        if (s.find(query) == s.end()){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
 

   
}
