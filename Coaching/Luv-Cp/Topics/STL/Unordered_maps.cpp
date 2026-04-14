#include <bits/stdc++.h>
using namespace std;

int main() {

    // 3 ---- Unordered Maps | access | insert > both are (1) Because it is using hashing instead of comparision at core
    // And it will not store the unqiue order like map


     unordered_map<string, int> m;
    int n;
    cin >> n;  // Corrected missing semicolon here

    // Read input strings and count their occurrences
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
    }

    for (auto &value : m) {
        cout << value.first << " " << value.second << endl;
    }


    // int q;
    // cin >> q;

    // // Answer queries
    // while (q--) {
    //     string s;
    //     cin >> s;
    //     cout << m[s] << endl;

    // }

    // return 0;



    // Multiple maps can also  store duplicate values unlike map  
}
