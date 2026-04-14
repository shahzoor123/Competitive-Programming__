#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n,m,a;
    cin >> n >> m >> a;

    long long stonesforWidth = (n + a - 1) / a;
    long long stonesforheight = (m + a - 1) / a;

    cout << stonesforheight * stonesforWidth << endl;

    

}



int main(){

    solve();        


  return 0;
}