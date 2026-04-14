#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a;
    cin >> n >> a;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    int totalCatch = 0;
    int pos = a - 1;

    for (int d = 0; d < n; d++) {

        int left = pos - d;
        int right = pos + d;
         
        if(left >= 0 && right < n){
            if(left == right){
                totalCatch += arr[left];
            }
            else if (arr[left] && arr[right]){
                totalCatch += 2;
            }
        }
        else if (left >= 0){
            totalCatch += arr[left];
        }
        else if (right < n) {
            totalCatch += arr[right];
        }
    
    }


    cout << totalCatch << endl;

    
}

int main(){
 
    solve();        
    return 0;
}
