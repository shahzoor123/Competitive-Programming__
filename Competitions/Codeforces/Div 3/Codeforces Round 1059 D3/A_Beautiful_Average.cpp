#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];  

    double max_avg = -1e9;


    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            int len = j - i + 1;
            double avg = (double)sum / len;

            if (avg > max_avg) {
                max_avg = avg;
            }
        }
    }

    cout << max_avg << endl;




    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
