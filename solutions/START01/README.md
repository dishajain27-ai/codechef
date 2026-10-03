# [Number Mirror (START01)](https://www.codechef.com/problems/START01)

- **Difficulty Rating**: 200
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem requires us to take a single integer as input and output the exact same integer back without any modifications. It is designed as a foundational warm-up problem to help beginners get familiar with the input/output mechanics of competitive programming platforms.

## Intuition & Mathematical Observation
There are no complex mathematical formulas or algorithms required for this problem. The task is simply to act as a "mirror": read a number from the standard input stream and immediately write it to the standard output stream. 

Using fast I/O practices (such as `ios_base::sync_with_stdio(false); cin.tie(NULL);`) and printing a newline `\n` instead of an endl ensures the program runs efficiently.

## Complexity Analysis

- **Time Complexity**: $O(1)$ — Reading a single number and printing it takes constant time.
- **Space Complexity**: $O(1)$ — Only a single variable (`n`) is used to store the input, requiring constant extra space.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Read the input number N
    long long n;
    if (cin >> n) {
        // Print the exact same number back to the output
        cout << n << "\n";
    }

    return 0;
}
```