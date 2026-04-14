#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> prog, math, pe;

    for (int i = 0; i < n; i++) {
        cin >> a[i];  

        if(a[i] == 1){
            prog.push_back(i+1);
        }
        else if (a[i] == 2){
            math.push_back(i+1);
        }
        else{
            pe.push_back(i+1);
        }
    }




    int totalTeams = min({prog.size(), math.size(), pe.size()});


    cout << totalTeams << endl; 
    for (int i=0;i<totalTeams;i++){
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }



    
}

int main(){
   
    solve();        
 

    return 0;
}
