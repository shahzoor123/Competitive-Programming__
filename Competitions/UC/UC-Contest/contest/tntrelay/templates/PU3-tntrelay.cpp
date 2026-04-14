#include <iostream>
#include <string>

using namespace std;

/**
 * Return the maximum number of players that can make it across the TNT bridge.
 * If infinitely many players can complete the course, return -1
 * 
 * N: number of blocks in the course
 * K: maximum jump distance of every player
 * S: description of the TNT bridge
 */
int solve(int N, int K, string S) {

    if (N <= K) {
        return -1;
    }

    int survive = 0;

    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){

            cout << S[j];
            // if (i + 4 == )
            // cout << S[i];
        }
        cout << endl;
    }



    return 0;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
        cout << solve(N, K, S) << '\n';
    }
}
