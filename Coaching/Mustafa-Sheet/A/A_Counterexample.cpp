#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long l,r;
    cin >> l >> r;

    long long a,b,c;

    for (long long i=l;i<=r;i++){
        for (long long j=i+1;j<=r;j++){
            for (long long h=j+1;h<=r;h++){

                if(gcd(i, j) == 1 && gcd(j, h) == 1 && gcd(i, h) != 1){
                    a = i;
                    b = j;
                    c = h;
                    cout << a << " " << b << " " << c << endl;
                    return;
                }
        
            }
        }
    }


    cout << -1 << endl;

  

}



int main(){

    solve();       
  return 0;
}