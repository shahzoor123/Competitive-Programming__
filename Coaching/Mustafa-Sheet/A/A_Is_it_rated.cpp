#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<pair<int,int>> ratings(n);
    bool isRated = false;
    bool inUnrated = false;

    for (int i = 0; i < n; i++) {
        cin >> ratings[i].first >> ratings[i].second;
        if(ratings[i].first != ratings[i].second){
            isRated = true;
        }  
    }

    if(isRated){
        cout << "rated" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if(ratings[i].first < ratings[i+1].second){
            inUnrated = true;
            break;
        }  
    }

    if(inUnrated){
        cout << "unrated" << endl;
    }
    else{
        cout << "maybe" << endl;
    }


    
}

int main(){

    solve();        
    return 0;
}
