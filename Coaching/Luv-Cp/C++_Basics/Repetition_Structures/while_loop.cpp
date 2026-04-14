#include <iostream>
#include <string>
using  namespace std;

main() {
    
    int number = 1;
    while (number <= 10) {
        number =  number + 1;
        if (2 * (number / 2) == number) {
            cout << number << endl;
        }
        
    }
};

