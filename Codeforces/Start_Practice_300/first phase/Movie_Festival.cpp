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

    vector<pair<int,int>> intervals;

    for (int i=0;i<n;i++){
        int s,e;
        cin >> s >> e;
        intervals.push_back({s, e});
    }

    sort(intervals.begin(), intervals.end(),
         [](pair<int,int> a, pair<int,int> b) {
             return a.second < b.second;
        });

    int count = 0;
    int lastEnd = -1;

    for(auto &interval : intervals){

        if(interval.first >= lastEnd){
            count++;
            lastEnd = interval.second;
        }

    }


    cout << count << endl;


}

int main(){

    
    solve();
    
    return 0;
}