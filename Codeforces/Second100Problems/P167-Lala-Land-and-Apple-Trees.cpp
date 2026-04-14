#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;


    vector<pair<int, int>> leftTrees, rightTrees;


    for (int i = 0; i < n; ++i) {
        int x, a;
        cin >> x >> a;
        if (x < 0) {
            leftTrees.push_back({-x, a}); 
        } else {
            rightTrees.push_back({x, a});
        }
    }

    // Sort trees by distance from 0
    sort(leftTrees.begin(), leftTrees.end());
    sort(rightTrees.begin(), rightTrees.end());



    int totalLeftStart = 0, totalRightStart = 0;

    // Simulate starting left
    bool direction = true;
    int i = 0, j = 0;
    while (true){
        if (direction){
            if (i < leftTrees.size()){
              totalLeftStart += leftTrees[i].second;
              i++;
              direction = false;
            }
            else{
                break;
            }
        }
        else{
            if (j < rightTrees.size()){
              totalLeftStart += rightTrees[j].second;
              j++;
              direction = true;
            }
            else{
                break;
            }
        }
      
    }



    // Simulate starting right
    direction = false;
    i = 0, j = 0;
    while (true){
        if (direction){
            if (i < leftTrees.size()){
              totalRightStart += leftTrees[i].second;
              i++;
              direction = false;
            }
            else{
                break;
            }
        }
        else{
            if (i < rightTrees.size()){
              totalRightStart += rightTrees[j].second;
              j++;
              direction = true;
            }
            else{
                break;
            }
        }
      
    }


    cout << max(totalLeftStart, totalRightStart) << endl;;




    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
