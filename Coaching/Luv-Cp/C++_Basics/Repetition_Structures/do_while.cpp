#include <iostream>
#include <string>
using  namespace std;

main() {
    
    char c ;
    int tryNum = 1;
    do{
        cout << "Please enter your guess by pressing a character key from a to z" << endl;
        cin >> c;
        if (c == 'z') {
            cout << "You have guessed the right word" << endl;
            break;
        }
        else {
            cout << "Wrong guess. Try again." << endl;
        }
        
        tryNum = tryNum +1;
     
    }
   

    
    
    while (tryNum <= 5);
   
};

