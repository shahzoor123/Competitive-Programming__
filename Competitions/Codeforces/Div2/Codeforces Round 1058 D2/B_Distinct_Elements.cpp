#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;

    vector<long long> b(n+1,0);
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<int> a(n+1);
    vector<int> positions(n+1, 0); 
    int next_value = 1;

    for(int i=1;i<=n;i++){
        long long difference  = b[i] - b[i-1];
        if(difference == i){
            a[i] = next_value;
            positions[i] = a[i];
            ++next_value;
        }
        else{
           int pos = int(i - difference);
            a[i] = positions[pos];
            positions[i] = a[i];
        }
    } 


    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }

    cout << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
