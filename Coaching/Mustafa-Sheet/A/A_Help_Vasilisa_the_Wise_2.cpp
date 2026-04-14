#include <bits/stdc++.h>
using namespace std;

int r1,r2,c1,c2,d1,d2;

bool check(int i, int j, int k, int l){
    return (i+j == r1 && k+l == r2 && i+k == c1 && j+l == c2 && i+l == d1 && j+k == d2);
}

void solve(){
   
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for (int i=1;i<10;i++){
        for (int j=1;j<10;j++){

            if(i==j) continue;

                for (int k=1;k<10;k++){
                    if(k==i || k==j) continue;

                    for (int l=1;l<10;l++){
                        if(l==i || l==j || l == k) continue;
                            if(check(i,j,k,l)){
                                cout << i << " " << j << endl << k << " " << l << endl;
                                return;
                            }
                              
                    }
                }
                  
        }
    }


    cout << -1 << endl;

}



int main(){

    solve();        
  return 0;
}