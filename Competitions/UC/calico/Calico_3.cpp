#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  
  
  
*/

// Claims on Algo
/*
  
  
*/

void solve(){
    int n;
    cin >> n;

    vector<string> names(n);
    vector<long long> powers(n);


    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }


    for (int i = 0; i < n; i++) {
        cin >> powers[i];
    }

    vector<pair<string, long long>> players;
    for (int i = 0; i < n; i++) {
        players.push_back({names[i], powers[i]});
    }

    while (players.size() > 1) {
        vector<pair<string, long long>> next_round;

        for (int i = 0; i < players.size(); i += 2) {
            auto [name1, p1] = players[i];
            auto [name2, p2] = players[i + 1];

            if (p1 == p2) {
                next_round.push_back({name1 + name2, p1 + p2});
            } else if (p1 > p2) {
                if (name1 != "1337") p1 += p2;
                next_round.push_back({name1, p1});
            } else {
                if (name2 != "1337") p2 += p1;
                next_round.push_back({name2, p2});
            }
        }

        players = move(next_round);
    }

    cout << players[0].first << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}