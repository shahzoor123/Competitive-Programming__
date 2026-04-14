/*
Given T Test Cases and in each 
test case a number N.Print 
Its factorial for each test case % M


Constraints
1 <= T <= 10^5
1 <= N <= 10^5
*/

#include <iostream>
#include <string>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long int fact[N];


// Precomutation

int main() {
  int t;
  cin >> t;


  // O(N^2) Now Lets Optimitze this

  // while(t--){

  //   int n;
  //   cin >> n;

  //   long long fact = 1;

  //   for (int i=2;i<=n;i++){
  //     fact = (fact * i) % M;
  //   }
  //   cout << fact << endl;

  // }



  // O(N) Optimitzed version using precomputing all factorials values
  // 10^5 + 10^5 = 10^5 = 1sec
 
  fact[0] = fact[1] = 1;

  for (int i=2;i<N;i++) {
      fact[i] = fact[i-1] * i;
  }

  while(t--){

    int n;
    cin >> n;
    cout << fact[n] << endl;

  }



  
}
