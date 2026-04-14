#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<string> c(n);
    vector<int> p(n);

    for (int i=0;i<n;i++) cin >> c[i];
    for (int i=0;i<n;i++) cin >> p[i];


    vector<pair<string, int>> opposites;

    for (int i=0;i<n;i++) opposites.emplace_back(c[i], p[i]);


    while(opposites.size() > 1){
        vector<pair<string, int>> nextRound;

        for (int i=0;i< opposites.size(); i += 2){
            string firstName = opposites[i].first;
            int firstPower = opposites[i].second;


            string secondName = opposites[i+1].first;
            int secondPower = opposites[i+1].second;

            if(firstPower > secondPower){
                if(firstName != "1337"){
                    firstPower += secondPower;
                }
                nextRound.emplace_back(firstName, firstPower);
            }
            else if (secondPower > firstPower){
                if(secondName != "1337"){
                    secondPower += firstPower;
                }

                nextRound.emplace_back(secondName, secondPower);
            }
            else{
                nextRound.emplace_back(firstName + secondName, firstPower + secondPower);
            }

        }
        opposites = nextRound;
    }


    
    cout << opposites[0].first << endl;

    
    
    
}

int main() {
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
