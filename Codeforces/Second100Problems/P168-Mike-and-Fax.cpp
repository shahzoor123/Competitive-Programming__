#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


void solve() {
    string s;
    int k;
    
    cin >> s >> k;


    if (s.size() % k != 0) {
        cout << "NO" << endl;
        return;
    }

    int subStringSize = s.size() / k;


    for (int i=0; i<s.size(); i += subStringSize){
        
        string fax = s.substr(i, subStringSize);

        if (!isPalindrome(fax)){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
