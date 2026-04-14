#include<bits/stdc++.h>
using namespace std;

// Right Approach

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int arr[n];
        int total_twos = 0;

        // Input the array and count the total number of 2's
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 2) {
                total_twos++;
            }
        }

        int left_twos = 0; // Running count of 2's in the left part

        int k = -1; // Default value if no valid k is found

        // Iterate through the array to find the smallest k such that the number of 2's
        // in the first half is equal to the number of 2's in the second half
        for (int i = 0; i < n - 1; i++) {
            // If the current element is a 2, update the left_twos counter
            if (arr[i] == 2) {
                left_twos++;
            }

            // Calculate the number of 2's in the right half by subtracting from total_twos
            int right_twos = total_twos - left_twos;

            // Check if the number of 2's in both halves are equal
            if (left_twos == right_twos) {
                k = i + 1; // Store the valid k (1-based index)
                break;
            }
        }

        // Output the result for the current test case
        cout << k << endl;
    }

    return 0;
}



// Wrong Approach


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int k = -1;
        int arr[n];
        long long total_product = 1;

        // Input the array and calculate the total product
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total_product *= arr[i];
        }

        long long left_product = 1; // Initializing left product to 1

        // Iterate over the array to find the smallest k
        for (int i = 0; i < n - 1; i++) {
            left_product *= arr[i];  // Update left product

            // Calculate right product dynamically by subtracting left_product from total_product
            long long right_product = total_product / left_product;

            // Check if both left and right products are equal
            if (left_product == right_product) {
                k = i + 1; // Store the valid k (1-based index)
                break;
            }
        }

        // Output the result for the current test case
        cout << k << endl;
    }

    return 0;
}




/*
The two approaches you presented are solving the same problem but with different strategies. Let’s break them down and identify why one works and the other doesn't.

Right Approach (Using Counting of 2s)

Explanation:
The problem seems to be about finding a position k where the number of 2s in the left part of the array is equal to the number of 2s in the right part.


Steps:

Count the total number of 2s in the array.
Traverse through the array while maintaining a running count of 2s on the left side.
For each position i, check if the number of 2s on the left is equal to the number of 2s on the right by subtracting the left count from the total count.
If a position k is found where both sides have equal 2s, print the index k.
Why It's Right:


Correct Concept: It is essentially finding a "balanced" split where the number of 2s on the left equals the number on the right.
Efficient Counting: Instead of recalculating the number of 2s in the right part on each iteration, it uses the total count and subtracts the left side count, which is a more efficient approach.
Time Complexity: The time complexity is O(n) for each test case, which is optimal since it processes the array in a single pass to count 2s and then another pass to check the balanced split.


Wrong Approach (Using Product Calculation)

Explanation:


The second approach seems to be trying to find a point where the product of the left part of the array equals the product of the right part.

Steps:

Calculate the total product of all elements in the array.
For each index, calculate the product of the left side (left_product), and dynamically calculate the right product as total_product / left_product.
Check if the left product equals the right product and return the index k.
Why It's Wrong:
Incorrect Problem Understanding: The problem is about the count of 2s in the two halves of the array, not the product of the elements. So this approach is fundamentally flawed because it is solving a different problem.
Possible Overflow: The product of large numbers can cause overflow if the elements of the array are large, or if the array contains many numbers, leading to incorrect results.
Inefficient: Since you're calculating products for each index, it might result in a higher time complexity (although still O(n) in terms of iterations, the actual computation of products can be costly).
Inaccurate Assumptions: The assumption that the left and right products should match is only relevant for a different problem (such as partitioning the array into two equal products), but not for balancing the count of a specific value (like 2).
Summary:
Right Approach:
Correct: Focuses on counting the number of 2s, which is the core of the problem.
Efficient: Uses a counting technique which avoids recalculating large sums or products repeatedly.
Wrong Approach:
Incorrect: It uses the product of elements, which is unrelated to the problem's requirement.
Potential Issues: Can lead to overflow or inefficiencies, especially with large arrays and numbers.
Therefore, the right approach is solving the problem correctly and efficiently, while the wrong approach is based on a misunderstanding of the problem, using products instead of counts.

*/