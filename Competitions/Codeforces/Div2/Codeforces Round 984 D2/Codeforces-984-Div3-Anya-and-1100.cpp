#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        string s; // Binary string
        cin >> s;

        int size =  s.size();

        

        int q; // Number of queries
        cin >> q;




        string substring = "1100"; // The substring to check
        set<int> indices;



        // Lambda function to update the set of indices
        auto Update = [&](int i) {
            if (i >= 0 && i <= size - 4) {
                if (s.substr(i, 4) == substring) {
                    indices.insert(i); // Insert if "1100" is found
                } else {
                    indices.erase(i); // Erase if "1100" is not found
                }
            }
        };



        // Initialize the set with indices where "1100" initially appears
        for (int i = 0; i <= size - 4; i++) {
            Update(i);
        }

        while (q--) {
            int i; // Index to modify (1-based)
            char v; // New value (0 or 1)
            cin >> i >> v;
            i -= 1;

            // cout << "now - q--" << i << " "<< v << endl;

            s[i] = v;

            // cout << s;



            // Check a range around the modified index
            for (int j = i - 3 ; j <= i ; j++) {
                Update(j);
            }

            // Output the result
            if (!indices.empty()) {
                cout << "YES" << endl; // Substring found
            } else {
                cout << "NO" << endl; // Substring not found
            }
        }
    }

    return 0;
}
