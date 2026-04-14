#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin>>n;

    if(n < 4 || n % 2 != 0){
      cout << -1 << endl;
      return;
    }

    cout << n / 6 + (n%6 != 0) << " " << n / 4 << endl;

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