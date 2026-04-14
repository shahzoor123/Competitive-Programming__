#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;


    if (n % 2 == 0){
      cout << n /2 << " " << n/2 << endl;
      return;
    }

    int best = 1;
    for (int i=2;i*i<=n;i++){
      if(n % i == 0){
        best  = max(i, n/i);
        break;
      }
    }

    cout << best << " " << n - best << endl;
    
}



int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}