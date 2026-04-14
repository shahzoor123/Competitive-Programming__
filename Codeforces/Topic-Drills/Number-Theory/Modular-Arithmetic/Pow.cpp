#include "utils.h"



int findPow(int a,int b){
    int p=1;

    for (int i=1;i<=b;i++){
        p*=a;
    }

    return p;
}


int main() {
    int a,b;
    cin >> a >> b;


    cout << findPow(a,b);
  

    return 0;
}
