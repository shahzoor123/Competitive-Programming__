#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome
bool ispalindrom(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

void solve() {
    string s;
    cin >> s;

    string largest_palindrome = "";

    
    int n = s.size();

    for (int mask = 0; mask < (1 << n); mask++) {

        cout << bitset<32>(mask) << endl;
        
        // string subseq = " ";

        // for (int i = 0; i < s.size(); i++) {
            
        //     if (mask & (1 << i)){
        //         subseq += s[i];
        //     } 
            
        // }

        // cout << "Mask: " << bitset<32>(mask) << " -> Subsequence: " << subseq << endl;

        // if (ispalindrom(subseq)){
        //     if(subseq > largest_palindrome){
        //         largest_palindrome = subseq;
        //     }
        // }
    }

    
   

    // cout << largest_palindrome << endl;
}

int main() {
    solve();
    return 0;
}
