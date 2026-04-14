#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,b,d;
    cin >> n >> b >> d;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int wasteCleanCount = 0;
    int currentWaste = 0;

    for (int i = 0; i < n; i++) {
        if(a[i] > b){
            continue;
        }
        else{
            currentWaste += a[i];
            if(currentWaste > d){
                wasteCleanCount++;
                currentWaste = 0;
            }
        }
    }


    cout <<  wasteCleanCount << endl;

    
}

int main(){

    solve();        


    return 0;
}
