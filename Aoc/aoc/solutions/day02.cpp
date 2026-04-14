#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a report is safe
bool isSafe(const vector<int>& levels) {
    // Check the condition that adjacent differences are between 1 and 3
    for (size_t i = 1; i < levels.size(); i++) {
        int diff = abs(levels[i] - levels[i - 1]);
        if (diff < 1 || diff > 3) {
            return false;  // If the difference is not between 1 and 3, return unsafe
        }
    }

    // Check if the levels are either all increasing or all decreasing
    bool increasing = true;
    bool decreasing = true;
    
    for (size_t i = 1; i < levels.size(); i++) {
        if (levels[i] > levels[i - 1]) {
            decreasing = false;  // If any number is increasing, mark decreasing as false
        }
        if (levels[i] < levels[i - 1]) {
            increasing = false;  // If any number is decreasing, mark increasing as false
        }
    }

    return increasing || decreasing;  // If it's either all increasing or all decreasing
}

int main() {
    ifstream inputFile("inputs/day2.txt");  // Open the input file
    if (!inputFile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    int safeReportCount = 0;

    while (getline(inputFile, line)) {
        stringstream ss(line);
        vector<int> levels;
        int level;

        // Read each number in the report and store it in the levels vector
        while (ss >> level) {
            levels.push_back(level);
        }

        // Check if the report is safe
        if (isSafe(levels)) {
            safeReportCount++;
        }
    }

    cout << "Number of safe reports: " << safeReportCount << endl;

    inputFile.close();  // Close the file
    return 0;
}


// Part 2



#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a report is safe
bool isSafe(const vector<int>& levels) {
    // Check the condition that adjacent differences are between 1 and 3
    for (size_t i = 1; i < levels.size(); i++) {
        int diff = abs(levels[i] - levels[i - 1]);
        if (diff < 1 || diff > 3) {
            return false;  // If the difference is not between 1 and 3, return unsafe
        }
    }

    // Check if the levels are either all increasing or all decreasing
    bool increasing = true;
    bool decreasing = true;
    
    for (size_t i = 1; i < levels.size(); i++) {
        if (levels[i] > levels[i - 1]) {
            decreasing = false;  // If any number is increasing, mark decreasing as false
        }
        if (levels[i] < levels[i - 1]) {
            increasing = false;  // If any number is decreasing, mark increasing as false
        }
    }

    return increasing || decreasing;  // If it's either all increasing or all decreasing
}

// Function to check if a report is safe after removing one level
bool isSafeAfterRemovingOneLevel(vector<int> levels) {
    // Try removing each level one by one and check if the report becomes safe
    for (size_t i = 0; i < levels.size(); i++) {
        vector<int> modifiedLevels = levels;
        modifiedLevels.erase(modifiedLevels.begin() + i);
        
        if (isSafe(modifiedLevels)) {
            return true;  // If any modified report is safe, return true
        }
    }
    return false;  // If no modified report is safe, return false
}

int main() {
    ifstream inputFile("inputs/day2.txt");  // Open the input file
    if (!inputFile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    int safeReportCount = 0;

    while (getline(inputFile, line)) {
        stringstream ss(line);
        vector<int> levels;
        int level;

        // Read each number in the report and store it in the levels vector
        while (ss >> level) {
            levels.push_back(level);
        }

        // Check if the report is safe without removing any level
        if (isSafe(levels)) {
            safeReportCount++;
        }
        // Check if removing one level can make the report safe
        else if (isSafeAfterRemovingOneLevel(levels)) {
            safeReportCount++;
        }
    }

    cout << "Number of safe reports: " << safeReportCount << endl;

    inputFile.close();  // Close the file
    return 0;
}


