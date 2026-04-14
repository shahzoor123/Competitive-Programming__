#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>  // For abs() function
#include <algorithm> // For sort() function
#include <unordered_map> // For counting occurrences

using namespace std;

// Function to calculate total distance
int totalDistance(vector<int>& leftList, vector<int>& rightList) {
    // Sort both lists
    sort(leftList.begin(), leftList.end());
    sort(rightList.begin(), rightList.end());

    int totalDist = 0;

    // Calculate the total distance by pairing elements
    for (size_t i = 0; i < leftList.size(); ++i) {
        totalDist += abs(leftList[i] - rightList[i]);
    }

    return totalDist;
}

int main() {
    // Open the input file
    ifstream inputFile("inputs/day1.txt");

    if (!inputFile) {
        cerr << "Unable to open file\n";
        return 1;
    }

    vector<int> leftList;
    vector<int> rightList;

    int left, right;

    // Read the input from the file and store the values in the lists
    while (inputFile >> left >> right) {
        leftList.push_back(left);
        rightList.push_back(right);
    }

    // Close the input file
    inputFile.close();

    // Calculate the total distance between the lists
    int result = totalDistance(leftList, rightList);

    // Output the result
    cout << "Total distance: " << result << endl;

    return 0;
}



// Part 2 




// Function to calculate the similarity score
int similarityScore(const vector<int>& leftList, const vector<int>& rightList) {
    unordered_map<int, int> rightCount;

    // Count occurrences of each number in the right list
    for (int num : rightList) {
        rightCount[num]++;
    }

    int totalScore = 0;

    // Calculate the similarity score by multiplying each number in the left list 
    // by the count of occurrences in the right list
    for (int num : leftList) {
        totalScore += num * rightCount[num]; // Multiply and add to the total score
    }

    return totalScore;
}

int main() {
    // Open the input file
    ifstream inputFile("inputs/day1.txt");

    if (!inputFile) {
        cerr << "Unable to open file\n";
        return 1;
    }

    vector<int> leftList;
    vector<int> rightList;

    int left, right;

    // Read the input from the file and store the values in the lists
    while (inputFile >> left >> right) {
        leftList.push_back(left);
        rightList.push_back(right);
    }

    // Close the input file
    inputFile.close();

    // Calculate the similarity score between the lists
    int result = similarityScore(leftList, rightList);

    // Output the result
    cout << "Similarity score: " << result << endl;

    return 0;
}
