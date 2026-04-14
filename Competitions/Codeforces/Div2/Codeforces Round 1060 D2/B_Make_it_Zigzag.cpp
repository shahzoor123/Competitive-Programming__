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
        vector<int> A(N);


        int ma = 0;


        for (int i = 0; i < N; i++) {
            int in;
            cin >> in;
            ma = max(ma, in);
            if (i % 2 == 1) A[i] = ma;
            else A[i] = in;
        }

        long long cnt = 0;

        if (A[0] >= A[1]) cnt += (A[0] - A[1] + 1);


        for (int i = 2; i < N; i += 2) {
            if (A[i] >= A[i - 1]) {
                cnt += (A[i] - A[i - 1] + 1);
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}
