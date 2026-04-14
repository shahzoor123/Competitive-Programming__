#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> X(N), Y(N);

        for (int i = 0; i < N; i++) {
            cin >> X[i];
        }

        for (int i = 0; i < N; i++) {
            cin >> Y[i];
        }


   
        bool found = false;

        for(int i=0;i<N;i++){
            
            int pivot = X[i];
            vector<pair<int,int>> L;

            for(int j=0;j<N;j++){
                
                int absolute = abs(X[j] - pivot);

                L.push_back({absolute,X[j]});

            }

            sort(L.begin(),L.end());

            vector<int> computed_Y;
            for (auto& p : L) {
                computed_Y.push_back(p.second);
            }

            
            if (computed_Y == Y) {
                cout << i + 1 << endl;
                found = true;
                break;
            }


        }


        if (!found) {
            cout << -1 << endl;
        }

    }

    return 0;
}
