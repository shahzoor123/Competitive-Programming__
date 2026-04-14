#include "my_functions.h"
#include <cmath>  // For M_PI constant

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

// Function to calculate the area of a square
double squareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double rectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double circleArea(double radius) {
    return M_PI * radius * radius;  // M_PI is a constant for pi
}
