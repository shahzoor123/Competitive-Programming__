#include <iostream>
using namespace std;



int main() {


    // Manupulation of 2d arrays

     
    const int  maxRows = 3; 
    const int  maxCols = 3; 
    int row, col; 
    
    int a[maxRows][maxCols]; 


    // To input numbers in the array 
    for (row = 0; row < maxRows; row ++) 
    { 
        for(col=0; col < maxCols; col ++) 
        { 
        cout << "\n" << "Enter " << row << "," << col << "element: "; 
        cin >> a[row][col]; 
        
        } 
    } 

   // To flip the elements of the matrix 
    cout << '\n' << "The flipped matrix is: " << '\n'; 

    for (row = maxRows - 1; row >= 0; row--) {  
        for (col = 0; col < maxCols; col++) { 
            cout << a[row][col] << '\t';  
        } 
        cout << '\n'; 
    }


    return 0;
    
}

