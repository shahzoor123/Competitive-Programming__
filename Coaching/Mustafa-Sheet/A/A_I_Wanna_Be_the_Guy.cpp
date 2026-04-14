#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;


    int p;
    cin >> p;

    set<int> levels;

    vector<int> x(p);
    for (int i = 0; i < p; i++) {
        cin >> x[i]; 
        levels.insert(x[i]);
        
    }

    int q;
    cin >> q;

    vector<int> y(q);
    for (int i = 0; i < q; i++) {
        cin >> y[i]; 
        levels.insert(y[i]);

    }


  
    for (int i=1;i<=n;i++){
        if(levels.find(i) == levels.end()){
            cout << "Oh, my keyboard!" << endl;
            return;
        }
    }



    cout << "I become the guy." << endl;


    
}

int main(){


    solve();        
    return 0;
}
