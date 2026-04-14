#include <bits/stdc++.h>
using namespace std;

long long solve(const string &s) {
    int n = s.size();
    vector<int> prefA(n+1, 0), prefB(n + 1, 0);

    // Prefix Count
    for(int i=1;i<=n;i++){
        prefA[i] = prefA[i-1] + (s[i-1] == 'a');
        prefB[i] = prefB[i-1] + (s[i-1] == 'b');
    }

    long long operationsA = 0, operationsB = 0;


    for (int i = 1; i <= n; i++) {

        if(s[i-1] == 'a'){
            operationsB += min(prefB[i], prefB[n] - prefB[i]);
        }
        else{
            operationsA += min(prefA[i], prefA[n] - prefA[i]);
        }

    }

    return min(operationsA,operationsB);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s) << '\n';
    }
    return 0;
}
