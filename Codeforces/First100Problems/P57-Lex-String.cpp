#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    string s1, s2;
    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    string c = "";
    int i = 0 , j = 0;
    int count1 = 0 , count2 = 0;

    while (i < n && j < m){

        if ((count1 < k) && (s1[i] <= s2[j] || count2 == k)){
            c += s1[i++];
            count1++;
            count2 = 0;
        }
        else{

            c += s2[j++];
            count2++;
            count1 = 0;
            
        }
        

    }

    cout << c << endl;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
