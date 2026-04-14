#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a,b;
    cin >> a >> b;

    for (int i=1;i<=a;i += b){
        a++;
    }

    cout << a-1 << endl;

}



int main(){


  solve();        


  return 0;
}