# [Kitchen Timings (KITCHENTIME)](https://www.codechef.com/problems/KITCHENTIME)

- **Difficulty Rating**: 273
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef works in the kitchen every day starting from hour $X$ and finishing at hour $Y$ (where $0 \le X < Y \le 24$). We are given the start time $X$ and the end time $Y$ for multiple test cases, and we need to find the total number of hours Chef works in the kitchen each day.

---

## Intuition & Mathematical Observation
Since Chef starts working at hour $X$ and finishes at hour $Y$, and the working period is continuous within the same day, the total number of working hours is simply the difference between the ending time and the starting time. 

Mathematically, the working hours $H$ can be calculated as:
$$H = Y - X$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a single subtraction and output the result. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a couple of integer variables to store the input values.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    int x, y;
    cin >> x >> y;
    // The number of working hours is simply the difference between ending time Y and starting time X
    cout << (y - x) << "\n";
}

int main() {
    // Fast I/O
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