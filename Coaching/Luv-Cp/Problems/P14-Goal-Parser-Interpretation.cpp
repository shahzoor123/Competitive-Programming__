#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
    	
        string interpreted_command;

        for (int i = 0; i < command.size(); ++i) {
            if (command[i] == 'G') {
                interpreted_command += 'G'; // Append 'G' to result
            } 
            else if (command[i] == '(') {
                // Check for either '()' or '(al)'
                if (i + 1 < command.size() && command[i + 1] == ')') {
                    interpreted_command += 'o'; // Append 'o' for '()'
                    i++; // Skip the next character
                } 
                else if (i + 3 < command.size() && command.substr(i, 4) == "(al)") {
                    interpreted_command += "al"; // Append 'al' for '(al)'
                    i += 3; // Skip over "(al)"
                }
            }
        }

        return interpreted_command; // Return the final interpreted string
    }
};

// Driver code
int main() {
    Solution solution;
    string command = "G()(al)";
    cout << solution.interpret(command) << endl; // Output: Goal
    return 0;
}
