#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,t1,t2,k;
    cin >> n >> t1 >> t2 >> k;


    vector<pair<int, double>> result;
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;


        double reductionPercent = (1 - k / 100.0);

        double combo1 = a * t1 * reductionPercent + b * t2;

        double combo2 = b * t1 * reductionPercent + a * t2;

        double maxResult = max(combo1,combo2);

        result.push_back({i+1, maxResult});

    }


    sort(result.begin(), result.end(), [](auto &x, auto &y) {
        if (abs(x.second - y.second) > 1e-9) 
            return x.second > y.second;
        else
            return x.first < y.first;
    });


    for (auto x : result) {
        cout << x.first << " " << fixed << setprecision(2) << x.second << endl;
    }

    
}

int main(){
  
    solve();        
    return 0;
}
