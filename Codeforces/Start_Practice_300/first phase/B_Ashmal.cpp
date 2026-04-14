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

bool lexographicall(const string& result, const string& current) {
    string front = current + result;
    string back  = result + current;
    return front < back;
}


void solve(){

    int n;
    cin >> n;

    vector<string> a(n);
    for (int i=0;i<n;i++){
        string s;
        cin >> s;
        a[i] = s;
    }

    string result = "";


    result += a[0];

    for (int i=1;i<n;i++){
        if(lexographicall(result, a[i])){
            result = a[i] + result;
        }
        else{
            result.append(a[i]);
        }
    }

    cout << result << endl; 
   

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}