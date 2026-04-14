#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solve(const string& S) {
    int n = S.size();
    long long count = 0;

    vector<int> uPositions;
    vector<int> wPositions;

    
    for (int i=0;i<n;i++){
        if(S[i] == 'u') uPositions.push_back(i);
        if(S[i] == 'w') wPositions.push_back(i);

    }

    int numU  = uPositions.size();
    int numW  = wPositions.size();

    for (int i = 0; i < numU; ++i) {
        int uPos = uPositions[i];

        auto it = upper_bound(wPositions.begin(), wPositions.end(), uPos);

        if(it != wPositions.end()){
            int firstWAfter = *it;
            
            auto uit = upper_bound(uPositions.begin(), uPositions.end(), firstWAfter);
            if (uit != uPositions.end()) {
                int numUAfterW = uPositions.end() - uit;
                count += numUAfterW;
            }
        }
    }

    return count;

}


int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string S;
        cin >> S;
        cout << solve(S) << '\n';
    }
}