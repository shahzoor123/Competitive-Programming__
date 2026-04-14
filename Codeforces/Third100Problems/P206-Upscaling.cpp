#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n; 

    int GridSize = 2 * n;

    for (int i=0;i<GridSize;i++){
        for (int j=0;j<GridSize;j++){

            if ((i / 2 + j / 2 ) % 2 == 0){

                cout << "#";
            }
            else{
                cout << ".";
            }
            
        } 
        cout << endl;
    }

    

}


int main() {

    int t;
    cin >> t;
    
    while (t--) {
        
        solve();
       
    }

    return 0;
}
