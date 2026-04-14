#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        {
            if (n % i == 0) return false;
        }

    return true;
}


void solve(){
    int n,m;
    cin >> n >> m;

    int nextPrime = 0;

    for (int i=n+1;i<50;i++){
        if(isPrime(i)){
            nextPrime = i;
            break;
        }
    }

    if(m == nextPrime){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    

}



int main(){

    solve();        
  return 0;
}