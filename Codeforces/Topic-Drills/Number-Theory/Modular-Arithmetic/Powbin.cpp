#include "utils.h"



int findPow(int a,int b){

    if (b == 0){
        return 1;
    }

    int x = findPow(a,b/2);

    int ans = 0;

    if(b%2==1){
        ans = x*x*a;
    }
    else{
        ans = x*x;
    }

    return ans;
    
}


int main() {
    int a,b;
    cin >> a >> b;


    cout << findPow(a,b);
  

    return 0;
}
