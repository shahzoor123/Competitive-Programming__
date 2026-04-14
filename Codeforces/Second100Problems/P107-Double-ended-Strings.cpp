#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;

    int size_a = a.size();
    int size_b = b.size();

    int minimumOperations = 0;
    int max_Substr = 0;

    for (int i=0;i<size_a;i++){
        for (int j=i;j<size_a;j++){
            string sub_a = a.substr(i, j - i + 1);
      
            if (b.find(sub_a) != string::npos &&  sub_a.size() > max_Substr){
               max_Substr = sub_a.size();
             
            }
        }
    }

    minimumOperations = (size_a - max_Substr) + (size_b - max_Substr);
    cout << minimumOperations << endl; 

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
