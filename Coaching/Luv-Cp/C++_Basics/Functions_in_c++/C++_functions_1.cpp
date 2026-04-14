#include <iostream>
#include <string>
using  namespace std;


int square(int i, int j) {
    int c; 
    c = i * j;
    return c;
}


int circleArea(double radius) {

    return (3.1415926 * radius * radius);
}





main() {

    double rad1 , rad2;
    double ringArea;
    cout << "Please enter the outer radius value";
    cin >> rad1;
    cout << "Please enter the inner radius value";
    cin >> rad2;
    ringArea = circleArea(rad1) - circleArea(rad2);


    cout << ringArea;
   
    system("pause");
};

