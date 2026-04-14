#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

// Helper function to trim whitespace
string trim(const string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    size_t last = str.find_last_not_of(" \t\n\r");
    return (first == string::npos || last == string::npos) ? "" : str.substr(first, last - first + 1);
}

// Function to parse a line of numbers into a vector
vector<int> parseNumbers(const string& line) {
    vector<int> numbers;
    stringstream ss(line);
    string item;
    while (getline(ss, item, ',')) {
        numbers.push_back(stoi(trim(item)));
    }
    return numbers;
}

// Function to check if the update order is valid
bool isValidOrder(const vector<int>& update, const unordered_map<int, set<int>>& mustBeBefore) {
    // Create a map of positions for quick lookup
    unordered_map<int, int> positions;
    for (size_t i = 0; i < update.size(); i++) {
        positions[update[i]] = i;
    }

    // Check each number in the update
    for (int num : update) {
        // If this number has dependencies
        if (mustBeBefore.count(num)) {
            // Check each number that must come before this one
            for (int before : mustBeBefore.at(num)) {
                // Skip if the 'before' number isn't in this update
                if (!positions.count(before)) continue;
                
                // If a number that should be before comes after, the order is invalid
                if (positions[before] > positions[num]) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    try {
        ifstream file("inputs/day5.txt");
        if (!file.is_open()) {
            throw runtime_error("Could not open input file");
        }

        // Parse dependencies: mustBeBefore[y] contains all numbers that must come before y
        unordered_map<int, set<int>> mustBeBefore;
        string line;
        bool readingUpdates = false;
        vector<vector<int>> updates;

        while (getline(file, line)) {
            line = trim(line);
            if (line.empty()) {
                readingUpdates = true;
                continue;
            }

            if (!readingUpdates) {
                // Parse dependency rule (format: "x|y" means x must be before y)
                size_t delimiter = line.find('|');
                if (delimiter != string::npos) {
                    int before = stoi(trim(line.substr(0, delimiter)));
                    int after = stoi(trim(line.substr(delimiter + 1)));
                    mustBeBefore[after].insert(before);  // y must have x before it
                }
            } else {
                // Parse update sequence
                updates.push_back(parseNumbers(line));
            }
        }

        // Process updates and sum middle numbers of valid ones
        int sum = 0;
        int validCount = 0;
        for (const auto& update : updates) {
            if (isValidOrder(update, mustBeBefore)) {
                int middle = update[update.size() / 2];
                sum += middle;
                validCount++;
                cout << "Valid update #" << validCount << ": ";
                for (int num : update) cout << num << " ";
                cout << "(middle: " << middle << ")" << endl;
            }
        }

        cout << "\nFound " << validCount << " valid updates" << endl;
        cout << "Sum of middle numbers from valid updates: " << sum << endl;

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}




// Part 2 


#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <queue>

using namespace std;

// Helper function to trim whitespace
string trim(const string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    size_t last = str.find_last_not_of(" \t\n\r");
    return (first == string::npos || last == string::npos) ? "" : str.substr(first, last - first + 1);
}

// Function to parse a line of numbers into a vector
vector<int> parseNumbers(const string& line) {
    vector<int> numbers;
    stringstream ss(line);
    string item;
    while (getline(ss, item, ',')) {
        numbers.push_back(stoi(trim(item)));
    }
    return numbers;
}

// Function to check if the update order is valid
bool isValidOrder(const vector<int>& update, const unordered_map<int, set<int>>& mustBeBefore) {
    // Create a map of positions for quick lookup
    unordered_map<int, int> positions;
    for (size_t i = 0; i < update.size(); i++) {
        positions[update[i]] = i;
    }

    // Check each number in the update
    for (int num : update) {
        // If this number has dependencies
        if (mustBeBefore.count(num)) {
            // Check each number that must come before this one
            for (int before : mustBeBefore.at(num)) {
                // Skip if the 'before' number isn't in this update
                if (!positions.count(before)) continue;
                
                // If a number that should be before comes after, the order is invalid
                if (positions[before] > positions[num]) {
                    return false;
                }
            }
        }
    }
    return true;
}

// New function to sort an update according to dependencies
vector<int> sortUpdate(const vector<int>& update, const unordered_map<int, set<int>>& mustBeBefore) {
    vector<int> result = update;
    
    // Bubble sort with dependency checking
    bool swapped;
    do {
        swapped = false;
        for (size_t i = 0; i < result.size() - 1; i++) {
            int current = result[i];
            int next = result[i + 1];
            
            // Check if next must come before current
            if (mustBeBefore.count(current) && mustBeBefore.at(current).count(next)) {
                // Swap them
                swap(result[i], result[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
    
    return result;
}

int main() {
    try {
        ifstream file("inputs/day5.txt");
        if (!file.is_open()) {
            throw runtime_error("Could not open input file");
        }

        // Parse dependencies: mustBeBefore[y] contains all numbers that must come before y
        unordered_map<int, set<int>> mustBeBefore;
        string line;
        bool readingUpdates = false;
        vector<vector<int>> updates;

        while (getline(file, line)) {
            line = trim(line);
            if (line.empty()) {
                readingUpdates = true;
                continue;
            }

            if (!readingUpdates) {
                // Parse dependency rule (format: "x|y" means x must be before y)
                size_t delimiter = line.find('|');
                if (delimiter != string::npos) {
                    int before = stoi(trim(line.substr(0, delimiter)));
                    int after = stoi(trim(line.substr(delimiter + 1)));
                    mustBeBefore[after].insert(before);  // y must have x before it
                }
            } else {
                // Parse update sequence
                updates.push_back(parseNumbers(line));
            }
        }

        // Part 2: Process only invalid updates
        int sum = 0;
        int invalidCount = 0;
        cout << "Invalid updates and their corrected orders:" << endl;
        
        for (const auto& update : updates) {
            if (!isValidOrder(update, mustBeBefore)) {
                invalidCount++;
                // Sort the invalid update
                vector<int> sortedUpdate = sortUpdate(update, mustBeBefore);
                int middle = sortedUpdate[sortedUpdate.size() / 2];
                sum += middle;
                
                cout << "Invalid update #" << invalidCount << ":\n";
                cout << "Original: ";
                for (int num : update) cout << num << " ";
                cout << "\nCorrected: ";
                for (int num : sortedUpdate) cout << num << " ";
                cout << " (middle: " << middle << ")" << endl << endl;
            }
        }

        cout << "\nFound " << invalidCount << " invalid updates" << endl;
        cout << "Sum of middle numbers from corrected invalid updates: " << sum << endl;

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}

