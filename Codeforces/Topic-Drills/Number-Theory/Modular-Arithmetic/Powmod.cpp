#include "utils.h"



int findPowMod(int a,int b, int m){

    if (b == 0){
        return 1;
    }

    int x = findPowMod(a,b/2,m)%m;

    int ans = 0;

    if(b%2==1){
        ans = (x%m*x%m)%m;
        ans = (ans%m*a%m)%m;
    }
    else{
        ans = (x%m*x%m)%m;
    }

    return ans;
    
}


int main() {
    int a,b;
    cin >> a >> b;

    int m = 100;

    cout << findPowMod(a,b,m);
  

    return 0;
}
