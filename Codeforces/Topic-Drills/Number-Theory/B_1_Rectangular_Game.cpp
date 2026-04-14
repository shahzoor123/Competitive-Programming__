#include <bits/stdc++.h>
using namespace std;

int smallest_prime_factor(int x) {
    if (x % 2 == 0) return 2;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return i;
    }
    return x; 
}


void solve(){
    int n;
    cin >> n;   


    int maxPoints = n;

    while (n > 1) {
        int p = smallest_prime_factor(n);
        n /= p;
        maxPoints += n;
    }

    cout << maxPoints << endl;

}



int main(){

    solve();        
  
  return 0;
}