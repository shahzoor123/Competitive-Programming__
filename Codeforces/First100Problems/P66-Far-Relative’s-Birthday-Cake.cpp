#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> cake(n);
   
    
    for (int i = 0; i < n; i++) {
        cin >> cake[i];
    }

    int happiness = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (cake[i][j] == 'C'){

                for (int k=j+1; k<n;k++){
                    if (cake[i][k] == 'C'){
                        happiness++;
                    }
                }

                for (int k=i+1; k<n;k++){
                    if (cake[k][j] == 'C'){
                        happiness++;
                    }
                }
            }
        }
      
    }

    cout << happiness << endl;
}

int main() {
 
    
    solve();
    return 0;
}
