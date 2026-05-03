#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define f(i, n) for (ll i = 0; i < n; ++i)


// Checking the Palindrom
bool checkPalindrome(string s){
    string reverse(s.rbegin(), s.end());
    return s == reverse;  // simplified
}

// Generating Subsequances
void printSubsequances(string str, int index, string current){
    if(index == str.length){
        if(current != ""){
            cout << current << endl;
        }
        return;
    }
    printSubsequances(str, index + 1, current);
    printSubsequances (str, index + 1, current + str[index]);
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}