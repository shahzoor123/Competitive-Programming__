/*
Given array a of N integers. Given q queries and
in each query given a number X,  print count 
of that number in array.


Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

#include <iostream>
#include <string>
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];


// Precomutation Prefix sum for 1d array

int main() {
  int n;
  cin >> n;

  for (int i=1;i<=n;++i){
    cin >> a[i];
    pf[i] = pf[i-1] + a[i];
  }

  int q;
  cin >> q;

  while(q--){
    int l,r;
    cin >> l >> r;

    // O(n^2)

    // for (int i=l;i<=r;i++){
    //   sum += a[i];
    // }

    // o(n)
    cout << pf[r] - pf[l-1] << endl;
  }




  
}
