#include <bits/stdc++.h>
using namespace std;



int main() {
    
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        vector<char> characters = {'a','b','c','d','e','f','g','h'};
        vector<int> numbers = {1,2,3,4,5,6,7,8};

        char col = str[0];  
        int row = str[1] - '0'; 

        for (int i=0;i<characters.size();i++){
            for (int j=0;j<numbers.size();j++){
                // Vertical moves
                if (characters[i] == col && numbers[j] != row) { 
                    cout << characters[i] << numbers[j] << endl;
                }
                // Horizontal moves
                if (characters[i] != col && numbers[j] == row) { 
                    cout << characters[i] << numbers[j] << endl;
                }
            }
        }


    }

    return 0;
}
