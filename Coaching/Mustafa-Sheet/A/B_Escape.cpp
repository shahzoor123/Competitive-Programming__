#include <bits/stdc++.h>
using namespace std;


void solve(){
    int Vp,Vd,t,f,c;
    cin >> Vp >> Vd >> t >> f >> c;


    if (Vp >= Vd) {
        cout << 0 << endl;
        return;
    }


    int totalBijous = 0;
    double princessPos = Vp * t;

    while (princessPos < c){

        double timetoCatch = princessPos / (Vd - Vp);
        princessPos += Vp * timetoCatch;
        

        if(princessPos >= c) break;
        totalBijous++;

        princessPos += Vp * (princessPos / Vd + f);
    }


    cout << totalBijous << endl; 

}



int main(){


    solve();        
  return 0;
}