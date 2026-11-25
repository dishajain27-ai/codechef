# [Chef and Donation (DNATION)](https://www.codechef.com/problems/DNATION)
- **Difficulty Rating**: 305
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef earns $X$ rupees per month, while Chefina earns $Y$ rupees per month ($Y \ge X$). They decide to donate the difference between Chefina's income and Chef's income to charity. We need to find the exact amount they donate each month.

## Intuition & Mathematical Observation
The problem directly states that the donation amount is the difference between Chefina's income and Chef's income. 

Mathematically:
$$\text{Donation} = Y - X$$

Since $Y \ge X$, the result will always be a non-negative integer. We simply compute $Y - X$ for each test case.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$, which easily executes well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space as we only store a few scalar variables.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        // The amount they donate is the difference between Chefina's and Chef's income
        cout << (y - x) << "\n";
    }

    return 0;
}
```