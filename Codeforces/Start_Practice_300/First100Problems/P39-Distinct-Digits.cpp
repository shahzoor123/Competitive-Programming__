#include <bits/stdc++.h>
using namespace std;


bool hasDistinctDigits(int number) {

    string numStr = to_string(number); 
    set<char> digits; 

    for (char digit : numStr) {
        if (digits.find(digit) != digits.end()) {
            return false;
        }
        digits.insert(digit);
    }
    return true; 
}

int main() {
 
    int l,r;
    cin >> l >> r;

    int distinct = -1;

    for (int i=l;i<=r;i++){
        if (hasDistinctDigits(i)){
            distinct = i;
            break;
        }
    }


    cout << distinct;


    
  
    
    return 0;
}
