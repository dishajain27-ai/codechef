# [The Cheaper Cab (CABS)](https://www.codechef.com/problems/CABS)
- **Difficulty Rating**: 399
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef needs to take a cab to work and has two cab services available. 
- The first cab service charges $X$ rupees.
- The second cab service charges $Y$ rupees.

We need to determine which cab service is cheaper. 
- Output `FIRST` if the first cab is cheaper ($X < Y$).
- Output `SECOND` if the second cab is cheaper ($Y < X$).
- Output `ANY` if both cab services cost the same ($X = Y$).

---

## Intuition & Mathematical Observation
This is a straightforward conditional comparison problem. For each test case, we are given two integers, $X$ and $Y$. By directly comparing these two values using standard relational operators (`<`, `>`, and `==`), we can determine the correct output without any complex arithmetic.

---

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per testcase, as we only perform a few basic comparisons. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ since we only use a couple of integer variables to store the prices.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    int x, y;
    cin >> x >> y;
    
    // Compare the prices of the two cab services
    if (x < y) {
        cout << "FIRST\n";
    } else if (y < x) {
        cout << "SECOND\n";
    } else {
        cout << "ANY\n";
    }
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}
```