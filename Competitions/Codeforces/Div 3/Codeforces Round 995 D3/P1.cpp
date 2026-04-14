#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; 

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i]; 
    }


    int Monocarp_problems,Stereocarp_problems;
    Monocarp_problems = 0, Stereocarp_problems = 0;

    vector<bool> trained(n, false);


    for (auto i=0;i<n;i++){

        if(i == n - 1 || a[i] > b[i+1]){
            Monocarp_problems += a[i];
            trained[i] = true;
        }

        
    } 

    for (auto i=0;i<n;i++){

        if(trained[i]){
            if(i + 1 < n){
                Stereocarp_problems += b[i+1];

            }
        }
  
    }

    int difference = Monocarp_problems - Stereocarp_problems;
    cout << difference << endl;

}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
