#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        cout<<n/2<<endl;
    }
    return 0;
}





// slow but correct solution

#include <iostream>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_gcd = 0;
        
        // Checking every pair (i, j) where 1 ≤ i < j ≤ n
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                max_gcd = max(max_gcd, gcd(i, j));
            }
        }
        cout << max_gcd << endl;
    }
    return 0;
}



