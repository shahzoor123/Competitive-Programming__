#include "utils.h"

vector<bool> seivePrimes(int n){
    vector<bool> primes(n+1,true);

    primes[0] = false;
    primes[1] = false;

    for(int i=0;i*i<=n;i++){
        if(primes[i]==true){
            for(int j=i*i;j<=n;j+=i){
                primes[j] = false;
            }
        }
    }

    return primes;

}



int main() {
    int n;
    cin >> n;

    vector<bool> primes = seivePrimes(n);

    for (int i=i;i<primes.size();i++){
        if(primes[i]){
            cout << i << endl;
        }
    }

    return 0;
}
