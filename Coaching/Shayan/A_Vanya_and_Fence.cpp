#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,h;
    cin >> n >> h;


    int greaterheight = 0;
    int roadWidth = 0;

    for (int i=0;i<n;i++){
        int a;
        cin >> a;

        if(a <= h){
            roadWidth++;
        }
        else{
            greaterheight++;
        }
    }


    cout << roadWidth + greaterheight * 2 << endl;

    

}



int main(){

    solve();        
   

  return 0;
}