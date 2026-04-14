#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void count_possible_strings() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        
        int count0 = 0, count1 = 0, k = 0;
        for (char c : S) {
            if (c == '0') count0++;
            else count1++;
            if (count0 == count1) k++;
        }
        
        cout << (1 << k) << endl;
    }
}

int main() {
    count_possible_strings();
    return 0;
}