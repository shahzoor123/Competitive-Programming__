#include <iostream>
#include <string>
using  namespace std;

main() {

    // Initializing the Variables 

    string alphabetic = "";
    string numeric = "" ;
    char first = '\0';
    char last = '\0';

    // Printing VU Student id

    const string id = "bc230406389";
    cout << "Student ID:" << id << endl;


    // This loop is sperating alphabetic and numeric

    for (int i=0; i<=id.size(); i++) {
        if (isalpha(id[i])) {
            alphabetic.push_back(id[i]);
        }
        else if (isdigit(id[i])){
            numeric.push_back(id[i]);
    
        }
        
            
    }

    // This condition is assigning first and last digits to variables

    if (!numeric.empty()){
        first = numeric[0];
        last = numeric[numeric.size() - 1];
    }



    cout << "alphabetic:" << alphabetic << endl;
    cout << "numeric:" << numeric <<  endl;
    cout << "First Digit:" << first<<  endl;
    cout << "Last Digit:" << last <<  endl;


    // This condition is first converting char to int then compare first and last digit and print the results

    if (first - '0' > last - '0') {
        cout << "First digit is larger " << first <<  endl;
    }
    else {
        cout << "Last digit is larger " << last <<  endl;
    }

    system("pause");

};

