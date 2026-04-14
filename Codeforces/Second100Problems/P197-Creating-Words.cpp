#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--){
        string s1,s2;
        cin >> s1 >> s2;

        char first = s1[0];
        char second = s2[0];

        s2[0] = first;
        s1[0] = second;

        cout << s1 << " " << s2 << endl;

    }

    return 0;
}