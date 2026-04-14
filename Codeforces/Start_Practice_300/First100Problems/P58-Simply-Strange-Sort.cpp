#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int iterations = 0;

    while (!sorted(a,n)) {
  
        if(iterations % 2 == 0){
            for (int i = 0; i < n - 1; i += 2) {
                if (a[i] > a[i + 1]) {
                    swap(a[i], a[i + 1]);
                
                }
            }
        }
        else{
            for (int i = 1; i < n - 1; i += 2) {
                if (a[i] > a[i + 1]) {
                    swap(a[i], a[i + 1]);
                
                }
            }
        }

      
        iterations++; 

        
    }

    
    cout << iterations << endl;
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        solve();
    }

    return 0;
}
