#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int size = 2 * n - 1; 

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {

        	int value = n - min(min(i,j), min(size - 1 - i, size - 1 - j));

            cout << value;

            if (j < size - 1) {
            	cout << " " ;
            }


        }
        cout << endl; 
    }
}



// In c 


// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n); // Read the integer n

//     int size = 2 * n - 1; // Calculate the size of the pattern

//     for (int i = 0; i < size; ++i) {
//         for (int j = 0; j < size; ++j) {
//             // Determine the value to print based on the layer
//             int value = n - (i < j ? (i < size - 1 - j ? i : size - 1 - j) : (j < size - 1 - i ? j : size - 1 - i));
//             printf("%d", value); // Print the value
//             if (j < size - 1) {
//                 printf(" "); // Print a space between numbers
//             }
//         }
//         printf("\n"); // New line after each row
//     }

//     return 0;
// }


