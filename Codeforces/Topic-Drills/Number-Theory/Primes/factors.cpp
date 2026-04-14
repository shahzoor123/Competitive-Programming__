#include "utils.h"


// O(N)
void printFactors1(int n) {
    for (int i=1;i<n;i++){
        if(n % i == 0){
            cout << i << endl ;
        }
    }
}



// O(sqrt(N))
void printFactors2(int n) {
    for (int i=1;i*i<=n;i++){
        if(n % i == 0){
            cout << i << endl;
            if(i!=n/i){
                cout << n/i << endl; 
            }
           
        }
    }
}


int main() {
    int n;
    cin >> n;

    printFactors2(n);
  

    return 0;
}
