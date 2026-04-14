#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeChars(string string1, string string2) {
        // Step 1: Identify characters in string1 that also exist in string2
        string charators_to_be_removed = "";

        for (int i = 0; i < string2.size(); ++i) {
            for (int j = 0; j < string1.size(); ++j) {
                if (string2[i] == string1[j]) {
                    if (charators_to_be_removed.find(string1[j]) == string::npos) {
                        charators_to_be_removed.push_back(string1[j]);
                    }
                }
            }
        }

        // Step 2: Create a new string with characters from string1 that are not in charators_to_be_removed
        string result = "";
        for (int j = 0; j < string1.size(); ++j) {
            if (charators_to_be_removed.find(string1[j]) == string::npos) {
                result.push_back(string1[j]);
            }
        }

        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1, string2;
        cin >> string1 >> string2;
        Solution ob;
        cout << ob.removeChars(string1, string2) << endl;
        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends
