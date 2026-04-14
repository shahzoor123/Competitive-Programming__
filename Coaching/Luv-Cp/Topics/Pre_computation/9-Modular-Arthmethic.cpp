#include <iostream>
#include <string>
using namespace std;




// Modular Arthimatic for big calculations & 10^9 + 7 importants

/*
Formulas of Modular Arithmetic:

+
  (a+b) % m = [(a % m)+(b % m)] % m

-
  (a−b) % m = [(a % m)−(b % m)+m] % m

*
  (a⋅b) % m = [(a % m)⋅(b % m)] % m

/
  b/a % m = (a⋅b −1) % m

*/ 

int main() {
  int n;
  cin >> n;

  long long fact = 1;
  // 47 because 10^9 is common between programmers
  int M = 47; 

  for (int i=2;i<=n;i++){
    // Stepwise Modulo
    fact = (fact * i) % M;
  }
  cout << fact;
}
