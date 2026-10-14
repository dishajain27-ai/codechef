# [Practice makes us perfect (PRACTICEPERF)](https://www.codechef.com/problems/PRACTICEPERF)

- **Difficulty Rating**: 467
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem asks us to track Chef's progress over four consecutive weeks. For each of the four weeks, we are given the number of problems Chef solved. We need to count the total number of weeks in which Chef solved **at least 10 problems**.

## Intuition & Mathematical Observation
We are given four integer values representing the number of problems solved in each of the four weeks. The condition for a successful week is solving $\ge 10$ problems. 

To solve this, we can:
1. Read the four integers ($p_1, p_2, p_3, p_4$).
2. Initialize a counter to zero.
3. Check each value independently using a conditional statement (`if` statement). If a value is greater than or equal to 10, increment our counter.
4. Output the final count.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$. The solution performs a fixed number of constant-time arithmetic comparisons and increments, meaning execution time is independent of the input values.
- **Space Complexity**: $\mathcal{O}(1)$. We only use a few integer variables (`p1`, `p2`, `p3`, `p4`, and `count`), requiring a constant amount of auxiliary memory.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p1, p2, p3, p4;
    if (cin >> p1 >> p2 >> p3 >> p4) {
        int count = 0;
        
        // Count how many weeks Chef solved at least 10 problems
        if (p1 >= 10) count++;
        if (p2 >= 10) count++;
        if (p3 >= 10) count++;
        if (p4 >= 10) count++;
        
        cout << count << "\n";
    }

    return 0;
}
```