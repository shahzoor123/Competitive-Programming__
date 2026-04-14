#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int minimumDollars = 0;
    int energy = 0;
    int currentHeight = 0;

    for (int i=0;i<n;i++){

        int diff = currentHeight - a[i];
        energy += diff;

        if(energy < 0){
            minimumDollars += -energy;
            energy = 0;
        }

        currentHeight = a[i];


    }

    cout << minimumDollars << endl;



    
}

int main(){
 
    solve();        
    return 0;
}
