#include <bits/stdc++.h>
using namespace std;

void findPassingRate()
{
    int scoreLevels;  // 'm' - Number of different scores
    cin >> scoreLevels;
    
    vector<int> studentsWithScore(scoreLevels);
    int totalStudents = 0;
    
    // Read student counts for each score
    for (int& count : studentsWithScore) {
        cin >> count;
        totalStudents += count;  // Calculate total number of students
    }


    int minGroupSize, maxGroupSize;
    cin >> minGroupSize >> maxGroupSize;  // Read valid group size constraints

    int beginnerGroupSize = studentsWithScore[0];  
    int intermediateGroupSize = totalStudents - beginnerGroupSize;

    for (int passingIndex = 1; passingIndex < scoreLevels; passingIndex++) {
        if (beginnerGroupSize >= minGroupSize && beginnerGroupSize <= maxGroupSize &&
            intermediateGroupSize >= minGroupSize && intermediateGroupSize <= maxGroupSize) {
            cout << passingIndex + 1 << "\n";  // Print valid passing rate k
            return;
        }
        beginnerGroupSize += studentsWithScore[passingIndex];
        intermediateGroupSize -= studentsWithScore[passingIndex];
    }

    cout << "0\n";  // No valid k found
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    findPassingRate();
    return 0;
}
