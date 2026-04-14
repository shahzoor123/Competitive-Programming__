#include <bits/stdc++.h>
using namespace std;

const int MOD = 1073741824;
const int MAXN = 1000000;
vector<int> divisors(MAXN + 1, 0);

void precomputeDivisors(){
    
    for (int d=1; d <= MAXN; d++){
        for (int multiple = d; multiple <= MAXN; multiple += d){
            divisors[multiple]++;
        }
    }
}



void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    long long sum = 0;
    vector<int> ab;

    for (int i=1;i<=a;i++){
        for (int j=1;j<=b;j++){
            ab.push_back(i * j);
        }
    }


    for (int i=0; i < (int)ab.size(); i++){
        for (int h=1; h<=c; h++){
            int val = ab[i] * h;
            sum += divisors[val];
            sum %= 1073741824;
        }
    }


    cout << sum << endl;

}



int main(){

    precomputeDivisors();
    solve();        
  return 0;
}