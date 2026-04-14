#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n,m;
    cin >> n >> m;

    long long totalPairs = 0;

    for (long long i=1;i<=n;i++){
        long long temp = i % 5;
        temp = (m+temp)/5;
        totalPairs += temp; 

    }

    cout << totalPairs << endl;

    

}



int main(){

    solve();        
  return 0;
}