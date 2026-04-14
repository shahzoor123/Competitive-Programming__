#include <iostream>
#define CUBE(x) ((x) * (x) * (x))
#define DEBUG

int main() {

    // Macros

    // int a = 3;
    // std::cout << "Cube of 3: " << CUBE(a) << std::endl;





    // Conditional preprocessors

    #ifdef DEBUG
    std::cout << "Debug mode is ON" << std::endl;
    #endif
    std::cout << "Program is running" << std::endl;


  
    return 0;
}
