#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    int team1 = 0;
    int team2 = 0;

    string team1Name = "";
    string team2Name = "";

    for (int i=0;i<n;i++){
        string s;
        cin >> s;

        if(team1Name == ""){
            team1Name = s;
            team1++;
        }
        else if(s == team1Name){
            team1++;
        }
        else{
            if(team2Name == ""){
                team2Name = s;
            }
            team2++;
        
        }
    }

    if(team1 > team2){
        cout << team1Name << endl;
    }
    else{
        cout << team2Name << endl;
    }

    

}



int main(){


  solve();        
 

  return 0;
}