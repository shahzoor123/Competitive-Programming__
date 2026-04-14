#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<pair<int, int>> records;

    for (int i=0;i<n;i++){
        int h,a;
        cin >> h >> a;

        records.push_back({h,a});
        
    }


    int count = 0;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            int home = records[i].first;
            int guest = records[j].second;

            if(home == guest){
                count++;
            }
        }
      
        
    }

    cout << count << endl;

    

}



int main(){

 
  solve();        
 

  return 0;
}