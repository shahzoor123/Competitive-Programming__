#include <iostream>
using namespace std;



int main() {


    // Pointers 

    // int y[1];
    // int *yptr;
    // yptr = y;
    // cout << yptr << endl ;
    // yptr++;
    // cout << yptr << endl;







    // Pointers with int

    // int x = 10;
    // int *yptr;
    // yptr = &x;
    // cout << yptr << endl ;
    // cout << *yptr << endl;

    // // This will increment the pointer value by 1
    // (* yptr)--;

    // // This will increment the pointer addreass by 4 bytes depends on the data type
    // (* yptr)--;

    // cout << *yptr << endl;










    // Pointers Substraction in return it will give us the distance between two array elements

    // int y[10] , *y1 , *y2 ;
    // y1 = &y[0];
    // y2 = &y[3];

    // if (y2 - y1 == 3) {
    //     cout << "Valid" ;
    // }

    // cout << y2 - y1;

    




    // Pointers in strings

    // string name[100][100] = {"Shahzoor" , "Baber"};
 
    // cout << name[0][0];


    char string1[20] = "Amir";
    char string2[20];
    char *ptrA, *ptrB;

    ptrA = string1;
    ptrB = string2;

    while (*ptrA != '\0') {
        *ptrB++ = *ptrA++;
    }
    *ptrB = '\0';

    cout << string2;

    return 0;
    
}

