#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// Map notes to their positions in the chromatic scale
map<string, int> note_positions = {
    {"C", 0}, {"C#", 1}, {"D", 2}, {"D#", 3}, {"E", 4}, {"F", 5},
    {"F#", 6}, {"G", 7}, {"G#", 8}, {"A", 9}, {"B", 10}, {"H", 11}
};

// Function to calculate semitone distance between two notes
int semitone_distance(int start, int end) {
    return (end - start + 12) % 12;
}

// Function to classify the triad
string classify_chord(vector<string> &notes) {
    // Convert notes to their positions
    vector<int> positions = {
        note_positions[notes[0]],
        note_positions[notes[1]],
        note_positions[notes[2]]
    };

    // Check all possible orderings of the notes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (i != j && j != k && i != k) {
                    int x = positions[i];
                    int y = positions[j];
                    int z = positions[k];

                    // Calculate intervals
                    int d1 = semitone_distance(x, y);
                    int d2 = semitone_distance(y, z);

                    // Check for major triad
                    if (d1 == 4 && d2 == 3) return "major";

                    // Check for minor triad
                    if (d1 == 3 && d2 == 4) return "minor";
                }
            }
        }
    }

    // If no valid ordering is found, classify as "strange"
    return "strange";
}

int main() {
    // Read input notes
    string note1, note2, note3;
    cin >> note1 >> note2 >> note3;

    // Classify the triad
    vector<string> notes = {note1, note2, note3};
    cout << classify_chord(notes) << endl;

    return 0;
}