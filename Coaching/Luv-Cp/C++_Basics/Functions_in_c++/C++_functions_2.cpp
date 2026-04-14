#include <iostream>
#include "my_functions.h"
using namespace std;

int main() {
    double side = 5.0;
    double length = 10.0;
    double width = 4.0;
    double radius = 3.0;
    
    cout << "Area of square: " << squareArea(side) << endl;
    cout << "Area of rectangle: " << rectangleArea(length, width) << endl;
    cout << "Area of circle: " << circleArea(radius) << endl;
    
    return 0;
}

