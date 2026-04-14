#include <iostream>
#include <string>
using namespace std;




// Modular Arthimatic for big calculations & 10^9 + 7 importants

int main() {
  int n;
  cin >> n;

  long long fact = 1;
  int M = 47;

  for (int i=2;i<=n;i++){
    fact = (fact * i) % M;
  }
  cout << fact;
}
