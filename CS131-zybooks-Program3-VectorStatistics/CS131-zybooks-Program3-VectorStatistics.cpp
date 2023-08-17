#include <iostream>
#include <iomanip>                   // for setprecision()
#include <vector>
#include <algorithm>                 // for sort()
using namespace std;

int main() {
    int count;

    // Step 0: Input values
    cin >> count;
    vector<int> nums(count);
    for (int i = 0; i < count; ++i) {
        cin >> nums.at(i);
    }

    // Step 1: Find minimum and maximum values
    /* Type your code here. */

    // Step 2: Calculate mean
    /* Type your code here. */

    // Step 3: Check if palindrome
    /* Type your code here. */

    // Sort vector elements in ascending order
    sort(nums.begin(), nums.end());

    // Step 4: Find and output median
    /* Type your code here. */

    // Step 5: Find and output mode
    /* Type your code here. */

    return 0;
}


/*
Program Specifications Write a program to calculate the minimum, maximum, mean, median, mode, and whether a vector is a palindrome.

Note: This program is designed for incremental development. Complete each step and submit for grading before starting the next step. Only a portion of tests pass after each step but confirm progress.

Step 0. Review the starter code in main(). A vector is filled with integers from standard input. The first value indicates how many numbers are to follow and be placed in the vector.

Step 1 (2 pts). Use a loop to process each vector element and output the minimum and maximum values. Submit for grading to confirm one test passes.

Ex: If input is:

6 4 1 5 4 99 17
the output is:

Minimum: 1
Maximum: 99
Step 2 (2 pts). Use a loop to sum all vector elements and calculate the mean (or average). Output the mean with one decimal place using cout << fixed << setprecision(1); once before all other cout statements. Submit for grading to confirm two tests pass.

Ex: If input is:

6 4 1 5 4 99 17
the output is:

Minimum: 1
Maximum: 99
Mean: 21.7
Step 3 (2 pts). Use a loop to determine if the vector is a palindrome, meaning values are the same from front to back and back to front. Output "true" or "false". Submit for grading to confirm three tests pass.

Ex: If input is:

9 1 2 3 4 5 4 3 2 1
the output is:

Minimum: 1
Maximum: 5
Mean: 2.8
Palindrome: true
Step 4 (1 pt). main() includes a call to sort(), which sorts the vector elements into ascending order. Do not sort the vector before step 4. After sorting, identify the median. The median is located in the middle of the vector if the vector's size is odd. Otherwise, the median is the average of the middle two values. Output the median with one decimal place. Submit for grading to confirm four tests pass.

Ex: If input is:

6 2 2 5 6 7 7
the output is:

Minimum: 2
Maximum: 7
Mean: 4.8
Palindrome: false
Median: 5.5
Step 5 (3 pts). Challenging! Identify the mode after the vector is sorted in ascending order. The mode is the value that appears most frequently. Assume only one mode exists. Hint: Use a loop to process each vector element, looking for the longest sequence of identical values. Submit for grading to confirm all tests pass.

Ex: If input is:

9 1 2 2 2 3 3 4 5 6
the output is:

Minimum: 1
Maximum: 6
Mean: 3.1
Palindrome: false
Median: 3.0
Mode: 2
*/