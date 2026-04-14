#include <bits/stdc++.h>
using namespace std;
vector<int> fib;



void precompute_fib(){

    fib.push_back(0);
    fib.push_back(1);

    for (int i=2; ; i++){
        int next_fib = fib[i-1] + fib[i-2];
        if(next_fib > 1e9){
            break;
        }
        fib.push_back(next_fib);
    }
}

void solve() {

    long long n;
    cin >> n;

    if (n == 0){
        cout << 0 << " " << 0 << " " << 0 << endl; 
        return;
    }

    if (n == 1){
        cout << 1 << " " << 0 << " " << 0 << endl; 
        return;
    }


    if (n == 2){
        cout << 1 << " " << 1 << " " << 0 << endl; 
        return;
    }


    precompute_fib();

    for (int i=1;i<fib.size();i++){
        for (int j=i;j<fib.size();j++){
            for (int k=j;k<fib.size();k++){
                    if (fib[i] + fib[j] + fib[k] == n){
                        cout << fib[i] << " " << fib[j] << " " << fib[k] << endl; 
                        return;
                    }
            }
      
        }
      
    }


    cout << "I'm too stupid to solve this problem" << endl;
   
}

int main() {
    solve();
    return 0;
}
