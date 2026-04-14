#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<int> mounds(n);

    for (int i=0;i<n;i++){
        mounds[i] = i+1;
    }

    int right = n-1;
    int left = 0;
    for (int i=0;i<n;i++){
        if(i % 2 == 0){
            cout << mounds[left] << " ";
            left++;
        }
        else{
            cout << mounds[right] << " ";
            right--;
        }
        
    }

    

}   



int main(){



    solve();        
  

  return 0;
}