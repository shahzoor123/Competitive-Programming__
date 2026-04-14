#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int minimumLetters = 0;

        for (int i=0;i<s.size();i++){

            if (minimumLetters < int(s[i])){
                minimumLetters = int(s[i]);
            }

        }


        int ans;

        int j = 0;

        for (char i='a';i<='z';i++){

            j++;
            
            if (i == minimumLetters){
                ans = j;
            }

        }


        cout << ans << endl;

        
    }

    return 0;
}
