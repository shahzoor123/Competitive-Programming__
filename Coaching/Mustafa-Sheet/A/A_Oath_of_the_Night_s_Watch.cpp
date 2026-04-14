#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    sort(a.begin(),a.end());

    int totalSupport = 0;
    int minStrenght = a[0];
    int maxStrenght = a[n-1];

    for (int i=0;i<n;i++){

        if(a[i] > minStrenght && a[i] < maxStrenght){
            totalSupport++;
        }

    }

    cout << totalSupport << endl;

    
}

int main(){

    solve();        


    return 0;
}
