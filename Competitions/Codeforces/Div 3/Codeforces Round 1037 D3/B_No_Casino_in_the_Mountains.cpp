#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int totalPeaks = 0;


    for (int i=0; i<= n - k;){

        bool validHike = true;
        for (int j = 0;j<k;j++){
            if(a[i+j] == 1){
                validHike = false;
                break;
            }
        }


        if(validHike){
            totalPeaks++;
            i += k+1;
        }
        else{
            i++;
        }
      
    }



    cout << totalPeaks << endl;



    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
