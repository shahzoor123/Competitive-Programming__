#include "utils.h"


// O(N)
bool checkPrime1(int n) {
    if (n == 0 || n == 1) return false;

    for (int i=2;i<=n-1;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// O(sqrt(N))
bool checkPrime2(int n) {
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

    if(checkPrime2(n)){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }


    return 0;
}
