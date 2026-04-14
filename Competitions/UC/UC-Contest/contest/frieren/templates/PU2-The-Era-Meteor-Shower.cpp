#include <bits/stdc++.h>
using namespace std;
#include <cmath>


// Function to perform floor division
int floor_division(float a, float b) {
    if (b == 0) {
        throw invalid_argument("Division by zero is undefined.");
    }
    
    // Perform standard division
    int result = static_cast<int>(a / b); // Perform standard division and cast to int
    
    // Use epsilon for floating point comparison
    const float epsilon = 1e-6; // Small value to check for zero remainder
    if (a < 0 && (a - result * b) < -epsilon) { // Adjust for floor division
        result--; // Adjust result for floor division
    }
    return result;
}


int main() {
    int t;
    cin >> t;


    while (t--) {
        int B, L, E;
        cin >> B >> L >> E ;

        int current_age_at_shower = B + E;
        int age_at_first_shower = current_age_at_shower % 50;
        int remaining_years = L - age_at_first_shower;
        int no_of_shower = floor_division(remaining_years , 50) + 1;

       
        cout << no_of_shower <<   endl;


    }
}



// Figure out how to use python floor division in c++ for accurate results
