#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;



    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    } 


    int longestSegment = 0;
    int count = 0;

    for(int i=0;i<n;i++){
        if (arr[i] == 0){
            count++;
        }
        else{
            longestSegment = max(longestSegment, count);
            count = 0;

        }
            
        
    } 

    longestSegment = max(longestSegment, count);

    cout << longestSegment << endl;
    


   
    

}


int main() {

    int t;
    cin >> t;
    
    while (t--) {
        
        solve();
       
    }

    return 0;
}
