// Part 1

#include <iostream>
#include <fstream>
#include <regex>
#include <string>

int main() {
    // Open the file for reading
    std::ifstream inputFile("inputs/day3.txt");

    if (!inputFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Read the entire content of the file into a string
    std::string line;
    std::string content;
    while (std::getline(inputFile, line)) {
        content += line;
    }

    // Close the file after reading
    inputFile.close();

    // Regular expression for matching mul(X,Y) instructions
    std::regex mulPattern("mul\\((\\d+),(\\d+)\\)");

    // Iterator for finding matches
    std::sregex_iterator iter(content.begin(), content.end(), mulPattern);
    std::sregex_iterator end;

    int totalSum = 0;

    // Loop through all matches
    for (; iter != end; ++iter) {
        // Extract the matched numbers
        int x = std::stoi((*iter)[1].str());  // First number
        int y = std::stoi((*iter)[2].str());  // Second number

        // Multiply and add to the total sum
        totalSum += x * y;
    }

    // Output the result
    std::cout << "Total Sum: " << totalSum << std::endl;

    return 0;
}


// Part 2


#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <sstream>

using namespace std;

int parse_and_compute(const string& corrupted_memory) {
    bool mul_enabled = true;
    int result_sum = 0;

    // Counters for debugging
    int do_count = 0;
    int dont_count = 0;
    int mul_count = 0;
    int enabled_mul_count = 0;

    // Updated regex patterns to be more flexible with corrupted text
    regex pattern(R"((mul\s*\(\s*(\d+)\s*,\s*(\d+)\s*\))|(do\s*\(\s*\))|(don'?t\s*\(\s*\)))");
    
    // Iterator for regex matches
    sregex_iterator it(corrupted_memory.begin(), corrupted_memory.end(), pattern);
    sregex_iterator end;

    // Process all matches
    while (it != end) {
        smatch match = *it;
        
        if (match[4].matched) {  // do()
            mul_enabled = true;
            do_count++;
            cout << "[DEBUG] Found do(), mul_enabled set to true" << endl;
        }
        else if (match[5].matched) {  // don't()
            mul_enabled = false;
            dont_count++;
            cout << "[DEBUG] Found don't(), mul_enabled set to false" << endl;
        }
        else if (match[1].matched) {  // mul(x,y)
            try {
                int x = stoi(match[2].str());
                int y = stoi(match[3].str());
                mul_count++;
                
                if (mul_enabled) {
                    result_sum += x * y;
                    enabled_mul_count++;
                    cout << "[DEBUG] Processing enabled mul(" << x << "," << y << ") = " << (x * y) 
                         << ", sum: " << result_sum << endl;
                } else {
                    cout << "[DEBUG] Skipping disabled mul(" << x << "," << y << ")" << endl;
                }
            } catch (const std::exception& e) {
                cout << "[ERROR] Failed to parse multiplication operands" << endl;
            }
        }
        
        ++it;
    }

    // Print summary
    cout << "\n=== Summary ===\n";
    cout << "Total do() found: " << do_count << endl;
    cout << "Total don't() found: " << dont_count << endl;
    cout << "Total mul() found: " << mul_count << endl;
    cout << "Total enabled mul() processed: " << enabled_mul_count << endl;
    cout << "Final sum: " << result_sum << endl;

    return result_sum;
}

string read_input_from_file(const string& file_path) {
    ifstream file(file_path);
    if (!file) {
        cerr << "Error: Could not open file " << file_path << endl;
        exit(1);
    }
    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void write_output_to_file(const string& file_path, int result) {
    ofstream file(file_path);
    if (!file) {
        cerr << "Error: Could not write to file " << file_path << endl;
        exit(1);
    }
    file << "The sum of enabled multiplications is: " << result << endl;
    cout << "Output written to " << file_path << endl;
}

int main() {
    // Input and output file paths
    string input_file = "inputs/day3.txt";  // Change this to the correct path of your input file
    string output_file = "day3_output.txt";

    // Read the corrupted memory from the file
    string corrupted_memory = read_input_from_file(input_file);

    // Call the function to compute the sum of enabled multiplications
    int result = parse_and_compute(corrupted_memory);

    // Write the result to the output file
    write_output_to_file(output_file, result);

    return 0;
}
