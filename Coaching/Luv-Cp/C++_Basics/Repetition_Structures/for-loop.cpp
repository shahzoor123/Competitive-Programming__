#include <iostream>
#include <string>
using  namespace std;

main() {
    
   int counter ;

   int table;
   cout << "Which table do you want to print" << endl;
   cin >> table;

   for (counter = 0 ; counter <= 10 ; counter++) {
    cout << table << " * " << counter << "=" << table * counter << endl;
   }
   
};

