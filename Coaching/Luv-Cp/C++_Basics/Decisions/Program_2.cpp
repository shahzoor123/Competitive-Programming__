#include <iostream>
#include <string>
using namespace std;

// Class definition
class Student {
private:
    string stdID;

public:
    // Setter function to assign Student ID
    void setID(string id) {
        stdID = id;
    }

    // Function to extract and process the numerical digits from Student ID
    int extractAndProcessDigits() {
        string numericalPart = "", odd = "", even = "";
        int oddSum = 0, evenSum = 0;

        // Loop to extract numerical part from stdID
        for (char c : stdID) {
            if (isdigit(c)) {
                numericalPart += c;
                int digit = c - '0'; // Convert char to integer
                
                // Check if digit is odd or even
                if (digit % 2 == 0) {
                    even += to_string(digit); // Convert digit to string
                    evenSum += digit;
                } else {
                    odd += to_string(digit); // Convert digit to string
                    oddSum += digit;
                }
            }
        }

        // Output the extracted numerical part
        cout << "Numerical Part of Student ID: " << numericalPart << endl;

        // Output odd and even digits
        cout << "Odd Digits: " << odd << endl;
        cout << "Even Digits: " << even << endl;

        cout << "Sum of Odd Digits: " << oddSum << endl;
        cout << "Sum of Even Digits: " << evenSum << endl;

        // Return sum of all digits
        return oddSum + evenSum;
    }

    // Function to display Student ID
    void displayID() {
        cout << "Student ID: " << stdID << endl;
    }
};

// Main function
int main() {
    // Create an object of Student class
    Student student;
    
    // Hardcoded Student ID
    string id = "BC230406389";
    
    // Set the student ID
    student.setID(id);
    
    // Display the complete Student ID
    student.displayID();
    
    // Extract digits and calculate sums
    int totalSum = student.extractAndProcessDigits();
    
    // Output the total sum of digits
    cout << "Sum of all Digits: " << totalSum << endl;

    system("pause");

    return 0;
}
