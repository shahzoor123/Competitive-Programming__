#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Function to evaluate expression with given operators
long long evaluate(const vector<long long>& numbers, const vector<char>& operators) {
    long long result = numbers[0];
    for (size_t i = 0; i < operators.size(); i++) {
        if (operators[i] == '+') {
            result += numbers[i + 1];
        } else { // '*'
            result *= numbers[i + 1];
        }
    }
    return result;
}

// Function to try all possible operator combinations
bool canMakeValue(long long target, const vector<long long>& numbers) {
    int n = numbers.size();
    int numOperators = n - 1;
    int totalCombinations = 1 << numOperators; // 2^(n-1) combinations

    // Try each possible combination of operators
    for (int mask = 0; mask < totalCombinations; mask++) {
        vector<char> operators(numOperators);
        for (int i = 0; i < numOperators; i++) {
            operators[i] = (mask & (1 << i)) ? '*' : '+';
        }
        
        if (evaluate(numbers, operators) == target) {
            return true;
        }
    }
    
    return false;
}

// Function to parse a line into target value and numbers
pair<long long, vector<long long>> parseLine(const string& line) {
    stringstream ss(line);
    string part;
    getline(ss, part, ':');
    long long target = stoll(part);
    
    vector<long long> numbers;
    while (ss >> part) {
        numbers.push_back(stoll(part));
    }
    
    return {target, numbers};
}

int main() {
    ifstream file("inputs/day7.txt");
    if (!file.is_open()) {
        cerr << "Could not open file" << endl;
        return 1;
    }

    string line;
    long long sum = 0;

    while (getline(file, line)) {
        auto [target, numbers] = parseLine(line);
        if (canMakeValue(target, numbers)) {
            sum += target;
        }
    }

    cout << "Sum of valid test values: " << sum << endl;
    return 0;
}


// Part 2


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Function to concatenate two numbers
long long concatenate(long long a, long long b) {
    string s1 = to_string(a);
    string s2 = to_string(b);
    return stoll(s1 + s2);
}

// Function to evaluate expression with given operators
long long evaluate(const vector<long long>& numbers, const vector<char>& operators) {
    long long result = numbers[0];
    for (size_t i = 0; i < operators.size(); i++) {
        if (operators[i] == '+') {
            result += numbers[i + 1];
        } else if (operators[i] == '*') {
            result *= numbers[i + 1];
        } else if (operators[i] == '|') { // concatenation
            result = concatenate(result, numbers[i + 1]);
        }
    }
    return result;
}

// Function to try all possible operator combinations
bool canMakeValue(long long target, const vector<long long>& numbers) {
    int n = numbers.size();
    int numOperators = n - 1;
    int totalCombinations = 1 << (2 * numOperators); // 3^(n-1) combinations

    // Try each possible combination of operators
    for (int mask = 0; mask < totalCombinations; mask++) {
        vector<char> operators(numOperators);
        bool validCombination = true;
        
        for (int i = 0; i < numOperators; i++) {
            int op = (mask >> (2 * i)) & 3;
            if (op == 0) operators[i] = '+';
            else if (op == 1) operators[i] = '*';
            else if (op == 2) operators[i] = '|';
            else {
                validCombination = false;
                break;
            }
        }
        
        if (!validCombination) continue;
        
        try {
            if (evaluate(numbers, operators) == target) {
                return true;
            }
        } catch (...) {
            // Handle any potential overflow errors
            continue;
        }
    }
    
    return false;
}

// Function to parse a line into target value and numbers
pair<long long, vector<long long>> parseLine(const string& line) {
    stringstream ss(line);
    string part;
    getline(ss, part, ':');
    long long target = stoll(part);
    
    vector<long long> numbers;
    while (ss >> part) {
        numbers.push_back(stoll(part));
    }
    
    return {target, numbers};
}

int main() {
    ifstream file("inputs/day7.txt");
    if (!file.is_open()) {
        cerr << "Could not open file" << endl;
        return 1;
    }

    string line;
    long long sum = 0;

    while (getline(file, line)) {
        auto [target, numbers] = parseLine(line);
        if (canMakeValue(target, numbers)) {
            sum += target;
        }
    }

    cout << "Sum of valid test values: " << sum << endl;
    return 0;
}
