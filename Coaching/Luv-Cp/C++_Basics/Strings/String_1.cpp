#include <iostream>
using namespace std;
#include <ctype.h>



int main() {

    // ASCII Codes

    // int i ;
    // char c;
    // for (i=0;i<256;i++) {
    //     c = i;
    //     cout << i << "\t" << c << endl; 
    // }



    // String Functions

    // string x = "DSDA2312323";

    // for (int i=0; i<x.size(); i++) {
    //     if (isalpha(x[i])) {

    //         cout << x[i] << endl;


    //         cout << tolower(x[i])<< endl;

    //     }
    // }

//     char c; 
//     int i = 0, lc = 0, uc = 0, dig = 0, ws = 0, pun = 0, oth = 0; 

//     cout << "Pleas enter a character string then press enter";

//     while ((c = getchar()) != '\n') 
//    { 
//       if (islower(c)) 
//          lc++; 
//       else if (isupper(c)) 
//          uc++; 
//       else if (isdigit(c)) 
//          dig++; 
//       else if (isspace(c)) 
//       ws++; 
//       else if (ispunct(c)) 
//       pun++; 
//       else 
//          oth++; 
//    }   
//    // display the counts of different types of characters 
//     cout << "You typed:"<< endl; 
//         cout<< "lower case letters =  "<<  lc<< endl; 
//         cout << "upper case letters =  " << uc <<endl; 
//     cout<< "digits =  " << dig << endl; 
//     cout<< "white space =  "<< ws << endl; 
//     cout<< "punctuation =  "<< pun<< endl; 
//     cout<< "others =  "<< oth; 
     






    // String Conversion functions and manipilating

    char str[] = "42";
    int age;
    age = atoi(str);

    cout << age ;





    return 0;
    
}

