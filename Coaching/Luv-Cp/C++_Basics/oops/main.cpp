#include <iostream>
using namespace std;
#include <string>

// Define a class 'Car'
class Car {
public:     // Access specifier
    string brand;  // Data member (attribute)
    int year;           // Data member (attribute)

    // Member function to display car details
    void displayDetails() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};



class Truck {
public:
    string brand;
    int year;

    // Default constructor
    Truck() {
        brand = "Unknown";
        year = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Truck(string b, int y) {
        brand = b;
        year = y;
        cout << "Parameterized constructor called" << endl;
    }

    // Member function to display details
    void displayDetails() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};









// Define the Date class
class Date {
public:
    // Member functions for displaying and setting/getting date values
    void display();        // to display the date on the screen
    void setDay(int i);    // setting the day
    void setMonth(int i);  // setting the month
    void setYear(int i);   // setting the year
    int getDay();          // getting the value of day
    int getMonth();        // getting the value of month
    int getYear();         // getting the value of year

    // Constructors of the class
    Date();                      // Default constructor
    Date(int d, int m);           // Constructor with day and month
    Date(int d, int m, int y);    // Constructor with day, month, and year

    // Destructor
    ~Date(); 

private:
    int day, month, year;  // Private members to store the date
};









// Constructor definitions

// Default constructor
Date::Date() {
    day = 1;
    month = 1;
    year = 2000;
    cout << "Default constructor called" << endl;
}

// Constructor with day and month
Date::Date(int d, int m) {
    day = d;
    month = m;
    year = 2000;  // Default year
    cout << "Constructor with day and month called" << endl;
}

// Constructor with day, month, and year
Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
    cout << "Constructor with day, month, and year called" << endl;
}

// Destructor definition
Date::~Date() {
    cout << "Destructor called for Date: " << day << "/" << month << "/" << year << endl;
}

// Setters and getters
void Date::setDay(int i) {
    day = i;
}

void Date::setMonth(int i) {
    month = i;
}

void Date::setYear(int i) {
    year = i;
}

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}

// Display function to show the date
void Date::display() {
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}





int main() {
  

    // Accessing attributes of the object
    // Car cars[5] = {
    //     {"Toyota", 2020},
    //     {"Honda", 2019},
    //     {"Ford", 2021},
    //     {"BMW", 2022},
    //     {"Tesla", 2023}
    // };

    // for (int i=0;i<5;i++) {
    // cars[i].displayDetails();
    // }




    // constructor

    // Truck car1; // Calls default constructor
    // car1.displayDetails();

    // Truck car2("Toyota", 2020); // Calls parameterized constructor
    // car2.displayDetails();




    // // program

    Date date1;               // Default constructor
    // Date date2(15, 8);         // Constructor with day and month
    // Date date3(25, 12, 2024);  // Constructor with day, month, and year

    // // Display the dates
    date1.display();
    // date2.display();
    // date3.display();



    return 0;
}
