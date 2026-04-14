#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
    1 - Divide n into 3 partitions 

    2 - Partition should be in asending order or equal

    3 - what is the maximum slices we can get of the m1 partitions



  
*/

// Small Observations
/*
  
  1 - we should selsect the m1 as on the edge of second partion 

  2 - Becasue to maximize the number of slices then we have to do that

  3 - means take out m1 from n in a way that still there is space for m2 or m3 to be greater or equal then m1
  
  
  
*/

// Claims on Algo
/*
  
  
*/



void solve() {
    long long n;
    cin >> n;
    long long total = 0;
        
    while (n >= 3) {
        long long m1 = n / 3;
        total += m1;
        n = n - 2 * m1; 
    }
    
    cout << total << "\n";
}


int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}