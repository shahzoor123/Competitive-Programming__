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


    // char string1[20] = "Amir";
    // char string2[20];
    // char *ptrA, *ptrB;

    // ptrA = string1;
    // ptrB = string2;

    // while (*ptrA != '\0') {
    //     *ptrB++ = *ptrA++;
    // }
    // *ptrB = '\0';

    // cout << string2;












    // Multi-Dimensional Arrays

    const char* names[10] = {
        "Alice", "Bob", "Eve", "John", "Mike",
        "Tom", "Emma", "Lily", "Lucy", "Noah"
    };

    char multi[10][6];

    for (int i=0;i<10;i++) {

        for (int j=0;j<10;j++) {
            
            if (names[i][j] == '\0') {
                  break;
            }

          multi[i][j] = names[i][j];

        }

        multi[i][9] = '\0';

    }

    // // Print the names from the multi array
    // cout << "\nThe names are: \n";
    // for (int i = 0; i < 10; i++) {
    //     cout << multi[i] << endl;
    // }





    // pointer in multi


    cout << multi<< endl;

    cout << *(&multi[0][0] + 1) << endl;

    cout << **multi << "---------Double Dereferencing" << endl;


    cout << **multi <<static_cast<char>(**multi + 3) << "---------Double Dereferencing" << endl;


    return 0;
    
}

