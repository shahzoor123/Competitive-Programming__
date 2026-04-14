#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin >> n;

    if(n % 2 == 0){
        cout << n/2 << endl;
        return;
    }
    else{
        
        cout << '-' << static_cast<long long>(ceil(static_cast<double>(n) / 2))<< endl;

    }

}



int main(){

  solve();        


  return 0;
}