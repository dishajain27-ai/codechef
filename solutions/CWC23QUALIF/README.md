# [Cricket World Cup Qualifier (CWC23QUALIF)](https://www.codechef.com/problems/CWC23QUALIF)

- **Difficulty Rating**: 203
- **Solved in**: 1 attempt(s)

---

## Problem Summary
The problem asks whether a cricket team has qualified for the next stage of the World Cup based on their total points. A team successfully qualifies if and only if they have accumulated **at least 12 points**. 

Given the integer $X$ representing the points scored by the team, we need to output `"Yes"` if $X \ge 12$, and `"No"` otherwise.

---

## Intuition & Mathematical Observation
This is a straightforward conditional check problem. No complex algorithms or data structures are required. 
- We read the input integer $X$.
- We compare $X$ with the threshold value of $12$.
- If $X \ge 12$, the condition is met, so we print `Yes`.
- Otherwise, we print `No`.

---

## Complexity Analysis

- **Time Complexity:** $\mathcal{O}(1)$. The solution performs a single arithmetic/comparison operation, taking constant time.
- **Space Complexity:** $\mathcal{O}(1)$. Only a single integer variable is used to store the input, requiring constant extra space.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    int x;
    cin >> x;
    
    // A team qualifies if they score 12 or more points
    if (x >= 12) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Call the solve function for the test case
    solve_case();
    
    return 0;
}
```