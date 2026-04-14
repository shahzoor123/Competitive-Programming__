#include<bits/stdc++.h>
using namespace std;


void AddingNumbers(int *a , int *b) {
    int c ;
    *a += 1;
    *b += 1;
    
}



int main() {

    // 1 - Practicing the array

    // int i , arr[10];
    // for ( i=0; i<10; i++) {
    //     arr[i] = i;
  
    // }
    // cout << arr ;




    // 2 -  Calling by values vs by reference

    // int i , b ;
    // i = 10;
    // b = 20; 

    // cout << i << "--" << b << "--" <<  AddingNumbers(i , b) ;
    // AddingNumbers(&i , &b);
    // cout << i << "--" << b;





    // 3 -  Coping the arrays


    int i , arr1[10] , arr2[10];
    for ( i=0; i<10; i++) {

        arr1[i] = i;
        arr2[i] = 0;

        cout << arr1[i] << endl;
        cout << arr2[i] << endl;
  
    }
 


    return 0;
}

