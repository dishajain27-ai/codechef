# [Chef and Instant Noodles (INSTNOODLE)](https://www.codechef.com/problems/INSTNOODLE)

- **Difficulty Rating**: 456
- **Solved in**: 1 attempt(s)

---

## Problem Summary

Chef has decided to open a service that prepares instant noodles. 
- He has $X$ stoves available.
- Each stove can prepare instant noodles for $1$ customer in $Y$ minutes.
- All stoves can operate simultaneously.

We need to find the **maximum number of customers** Chef can serve in $Y$ minutes.

---

## Intuition & Mathematical Observation

- Chef has $X$ stoves.
- In $Y$ minutes, a single stove can serve $1$ customer. 
- Since all $X$ stoves can operate in parallel, in $Y$ minutes, $X$ stoves can collectively serve $X \times 1 = X$ customers.
- Therefore, the maximum number of customers Chef can service in $Y$ minutes is simply the product of the number of stoves ($X$) and the time limit ($Y$), which is $X \times Y$.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ as the solution only requires a single multiplication and output operation.
- **Space Complexity**: $\mathcal{O}(1)$ because no extra data structures are used.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    long long x, y;
    cin >> x >> y;
    // Maximum customers = stoves * minutes
    cout << x * y << "\n";
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // This problem has a single testcase per file, but we structure it correctly.
    solve_case();
    
    return 0;
}
```