#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin >> n;

    long long sum = 0;
    
    while(n != 0){

        if(n % 2 == 1){
            sum++;
        }
        n = n / 2;
    }

    cout << sum << endl;


}



int main(){


    solve();        
  return 0;
}