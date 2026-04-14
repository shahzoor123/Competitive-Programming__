#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;


    for(int i=0;i<n;i++){
        cout << i << endl;
    }

    for(int i=n-1;i>=0;i--){
        cout << i << endl;
    }

    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<n;i++){
        cout << v[i] << endl;
    }

    for(int i=0;i<n;i++){
        cout << i << " " << v[i] << endl;
    }

    for(int i=0;i<n;i++){
        if(i % 2 == 0){
            cout << v[i];
        }
    }


    int n;
    cin >> n;

    // Print 0 to n-1
    for (int i = 0; i < n; i++) {
        cout << i << "\n";
    }

    // Print n-1 to 0
    for (int i = n - 1; i >= 0; i--) {
        cout << i << "\n";
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Print all
    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }

    // Print index + value
    for (int i = 0; i < n; i++) {
        cout << i << " " << v[i] << "\n";
    }

    // Print values at even indices
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << v[i] << " ";
        }
    }
    cout << "\n";



}



int main(){
    solve();        
  return 0;
}