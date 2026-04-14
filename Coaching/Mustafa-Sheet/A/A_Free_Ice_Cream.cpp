#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x;
    cin >> n >> x;

    long long distressKids = 0;
    long long currentIceCreamPacks = x;

    for (int i = 0; i < n; i++) {
        char sign;
        int d;
        cin >> sign >> d;

        if(sign == '-' && currentIceCreamPacks >= d){
            currentIceCreamPacks -= d; 
        }
        else if (sign == '+'){
            currentIceCreamPacks += d;
        }
        else{
            distressKids++;
        }

    }


    cout << currentIceCreamPacks << " " << distressKids << endl;

    
}

int main(){

    solve();        
 

    return 0;
}
