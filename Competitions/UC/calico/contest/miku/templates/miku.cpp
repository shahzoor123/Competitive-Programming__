#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solve(const string& S) {
    int n = S.size();
    int count = 0;

    vector<int> uPositions;
    vector<int> wPositions;

    
    for (int i=0;i<n;i++){
        if(S[i] == 'u') uPositions.push_back(i);
        if(S[i] == 'w') wPositions.push_back(i);

    }

    for (int i = 0; i < uPositions.size(); ++i) {
        for (int j = i + 1; j < uPositions.size(); ++j) {
            int u1 = uPositions[i];
            int u2 = uPositions[j];

            for (int wPos : wPositions){
                if(wPos > u1 && wPos < u2){
                    count++;
                    break;
                }
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