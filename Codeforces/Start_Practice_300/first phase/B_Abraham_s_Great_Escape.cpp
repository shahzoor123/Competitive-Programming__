#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if((n*n - 1) == k){
        cout << "NO" << endl;
        return;
    }

    char grid[n][n];


    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(j == n-1){
                grid[i][j] = 'L';
            }
            else{
                grid[i][j] = 'R';
            }
        }
    }

    int i = 0;
    int j = 0;
    int c = 0;

    while(c < k){
        grid[i][j] = 'L';
        j+=1;
        c+=1;
        if(j==n){
            j = 0;
            i+=1;
        }
        
    }


    if((k % n) == n-1){
        int row = k/n;
        grid[row][n-1] = 'D';
    }

    cout << "YES" << endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << grid[i][j]; 
        }
        cout << endl;
    }

   
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
