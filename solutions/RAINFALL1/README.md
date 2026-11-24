# [Rain in Chefland (RAINFALL1)](https://www.codechef.com/problems/RAINFALL1)
- **Difficulty Rating**: 328
- **Solved in**: 1 attempt(s)

## Problem Summary

The problem asks us to categorize the intensity of rainfall based on a given integer `x`, which represents the amount of rainfall in millimeters. The categorization rules are as follows:
- If `x` is less than 3 mm, the rainfall is considered "LIGHT".
- If `x` is greater than or equal to 3 mm but less than 7 mm, the rainfall is considered "MODERATE".
- If `x` is greater than or equal to 7 mm, the rainfall is considered "HEAVY".

We need to process `t` test cases, and for each test case, read `x` and print the corresponding category.

## Intuition & Mathematical Observation

This problem is a straightforward application of conditional logic. We are given specific thresholds for `x` to determine the rainfall category. The most natural way to implement this is using `if-else if-else` statements.

The conditions are mutually exclusive and cover all possible non-negative integer values for `x`:
1. **`x < 3`**: This is the first condition to check. If true, it's "LIGHT".
2. **`else if (x < 7)`**: If the first condition (`x < 3`) was false, it means `x` must be `>= 3`. So, this `else if` block effectively checks for `3 <= x < 7`. If true, it's "MODERATE".
3. **`else`**: If neither of the above conditions was true, it means `x` is not `< 3` (so `x >= 3`) AND `x` is not `< 7` (so `x >= 7`). Combining these, it simply means `x >= 7`. If true, it's "HEAVY".

No complex mathematical observations or algorithms are required; a direct implementation of the given rules suffices.

## Complexity Analysis

-   **Time Complexity**: $O(T)$
    For each test case, we read an integer `x` and perform a few constant-time comparisons using `if-else if-else` statements. This takes $O(1)$ time per test case. Since there are `T` test cases, the total time complexity will be $O(T)$. The fast I/O setup `ios_base::sync_with_stdio(false); cin.tie(NULL);` also takes constant time.

-   **Space Complexity**: $O(1)$
    We only use a few integer variables (`t`, `x`) to store input and loop counters. The amount of memory used does not depend on the input values or the number of test cases `T`. Therefore, the space complexity is constant.

## Solution Code

```cpp
#include <bits/stdc++.h> // Includes common C++ headers like iostream

int main() {
    // Optimize C++ standard streams for faster input/output.
    // This unties cin from cout and disables synchronization with C's stdio.
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t; // Declare an integer variable 't' for the number of test cases.
    std::cin >> t; // Read the number of test cases.

    // Loop through each test case.
    while (t--) {
        int x; // Declare an integer variable 'x' for the rainfall amount.
        std::cin >> x; // Read the rainfall amount for the current test case.
        
        // Categorize rainfall based on the problem statement's rules.
        if (x < 3) {
            // If rainfall is less than 3mm, it's LIGHT.
            std::cout << "LIGHT\n";
        } else if (x < 7) {
            // If not LIGHT (i.e., x >= 3) and less than 7mm, it's MODERATE.
            std::cout << "MODERATE\n";
        } else {
            // If neither of the above (i.e., x >= 7), it's HEAVY.
            std::cout << "HEAVY\n";
        }
    }

    return 0; // Indicate successful program execution.
}

```