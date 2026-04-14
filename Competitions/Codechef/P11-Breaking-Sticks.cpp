#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> sticks(N);
    for (int i = 0; i < N; ++i) {
        cin >> sticks[i];
    }


    int breaks = 0;

    for (int i=0;i<N;i++){
        if(sticks[i] > 1){
            breaks += sticks[i] - 1;
        }
    }


    cout << breaks << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;  

    for (int t = 0; t < T; ++t) {
        solve();  
    }

    return 0;
}
