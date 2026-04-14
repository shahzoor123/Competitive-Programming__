#include <iostream>
using namespace std;



int main() {


    // Characters arrays

    char names[3][8] = { "Alice", "Bob", "Charlie" };
    // char name[] = {'s', 'b', 'c'};
    // char name [] = {'sk','bk','ck'};
    int size = sizeof(names) / sizeof(names[0]);

    for (int i=0; i<=size; i++) {
 
        cout << names[i] << endl;
    
  
    }
 


    return 0;
}

