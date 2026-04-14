#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int untreated = 0;
    int officers = 0;

    for (int i=0;i<n;i++){
        if(a[i] == -1){
            if(officers > 0){
                officers--;
            }
            else{
                untreated++;
            }
        }
        else{
            officers += a[i];
        }
    }

    cout << untreated << endl;

    
}

int main(){
  
    solve();        


    return 0;
}
