#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    

    int minimumElementOne = *min_element(a.begin(),a.end());
    int minimumElementTwo = *min_element(b.begin(),b.end());

    int common_digit = 0;

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++){
            if (a[i] == b[j]){
                if (a[i] == b[j]){
                    common_digit = a[i];
                }
                
            }
        }
        if (common_digit != 0) break;
    }

    if (common_digit != 0){
        cout << common_digit << endl;
        return;
    }     
    else {
            if (minimumElementOne > minimumElementTwo) {

                    swap (minimumElementOne, minimumElementTwo);
                    cout << minimumElementOne << minimumElementTwo;
                    return;
            }
        cout << minimumElementOne << minimumElementTwo;

        return;
    }
        




    

  



   
        

}

int main() {
    solve();
    return 0;
}
