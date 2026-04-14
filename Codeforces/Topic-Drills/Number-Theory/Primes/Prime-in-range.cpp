#include "utils.h"


// Find all prime number in a given range


bool checkPrime(int n) {
    if (n == 0 || n == 1) return false;

    for (int i=2;i*i<=n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}



int main() {
    int n;
    cin >> n;

    for (int i=1;i<n;i++){// O(N)
        if(checkPrime(i)){// N(sqrt(N))
            cout << i << " "; 
        }
    }


    return 0;
}
