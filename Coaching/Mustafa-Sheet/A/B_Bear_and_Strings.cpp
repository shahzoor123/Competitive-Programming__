#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin >> s;

    int n = s.size();

    vector<int> pos;
    for (int i = 0; i + 3 < n; i++) {
        if (s.substr(i, 4) == "bear") {
            pos.push_back(i);
        }
    }

    long long totalPairs = 0;
    int idx = 0;

   for (int i = 0; i < n; i++) {

        while (idx < (int)pos.size() && pos[idx] < i) {
            idx++;
        }
        if (idx < (int)pos.size()) {
            int p = pos[idx];         
            int earliestEnd = p + 3;
            totalPairs += (n - earliestEnd);
        }
    }


    cout << totalPairs << endl;

}



int main(){

    solve();        
  return 0;
}