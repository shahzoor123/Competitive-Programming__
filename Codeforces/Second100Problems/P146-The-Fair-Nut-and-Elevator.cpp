#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> numberofPeople(n);

    for (int i=0;i<n;i++){
        cin >> numberofPeople[i];
    }


    int minCost = INT_MAX;

    for (int x=0;x<n;x++){

        int totalCost = 0;

        for (int i=0;i<n;i++){
            int costPerPerson = abs(x - i) + abs(i - 0) + abs(0 - x);
            totalCost += numberofPeople[i] * costPerPerson * 2;
        }  

        minCost = min(minCost, totalCost);

    }


    cout << minCost << endl;
  
   
}

int main() {
 
    solve();
   
    return 0;
}