#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int firstHalfMax = max(a,b);
    int firstHalfMin = min(a,b);


    int fRequiredOtherTeamScore = (firstHalfMax - 1) / 2;

    int sa = c - a;        
    int sb = d - b;  
    int secondHalfMax = max(sa,sb);
    int secondHalfMin = min(sa,sb);

    int sRequiredOtherTeamScore = (secondHalfMax - 1) / 2;;

    if(firstHalfMin >= fRequiredOtherTeamScore && secondHalfMin >= sRequiredOtherTeamScore){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl; 
    }
    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
