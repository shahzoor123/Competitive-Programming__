#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;
    cin >> n >> m;

    map<char, int> freq;


    int total = n * m;

    for (int i=0;i<total;i++){
        char color;
        cin >> color;
        freq[color]++;
    }

    bool isColors = false;
    for (auto it : freq) {
        if(it.first == 'C' || it.first == 'M' || it.first == 'Y'){
                isColors = true;
                break;
        }

    }
    
    if(isColors){
        cout << "#Color" << endl;
    }
    else{
        cout << "#Black&White" << endl;
    }

}



int main(){


  solve();        
  return 0;
}