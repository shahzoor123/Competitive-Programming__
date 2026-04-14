#include <bits/stdc++.h>
using namespace std;

void solve() {
    double n, m;
    cin >> n >> m; 

    map<int, float> Prices;
    
    for (int i = 0; i < n; i++) {
        double a,b;
        cin >> a >> b;
        double temp = static_cast<double>((a) / b) * m; 
        Prices[i] = temp;
    }

    double minValue = DBL_MAX; 
    int minKey = -1;

    for (const auto &value : Prices) {

         if(value.second < minValue){
            minValue = value.second;
            minKey = value.first;
        }
    }

    cout << fixed << setprecision(6) << minValue << endl;
}

int main() {
   
   
    solve();  
    return 0;
}
