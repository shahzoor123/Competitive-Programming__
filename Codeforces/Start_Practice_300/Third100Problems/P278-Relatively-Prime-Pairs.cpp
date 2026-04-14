#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long l,r;
    cin>>l>>r;
    cout << "YES" << endl;
    for (long long i=l;i<r+1;i+=2){
      cout << i << " " << i + 1 << endl;
    }

    return;
    
}



int main()
{
  solve();

  return 0;
}