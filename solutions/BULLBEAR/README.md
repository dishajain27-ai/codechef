# [Bull or Bear (BULLBEAR)](https://www.codechef.com/problems/BULLBEAR)

- **Difficulty Rating**: 300
- **Solved in**: 3 attempt(s)

## Problem Summary
Chef bought a certain item at a cost of $X$ dollars and later sold it at a selling price of $Y$ dollars. We need to determine whether Chef made a profit, incurred a loss, or broke even. Specifically:
- Output `PROFIT` if the selling price ($Y$) is strictly greater than the cost price ($X$).
- Output `LOSS` if the selling price ($Y$) is strictly less than the cost price ($X$).
- Output `NEUTRAL` if the selling price ($Y$) is equal to the cost price ($X$).

## Intuition & Mathematical Observation
This is a straightforward conditional logic problem based on financial transactions:
1. **Profit Condition:** $Y > X$
2. **Loss Condition:** $Y < X$
3. **Neutral Condition:** $Y = X$

Since the problem requires processing multiple test cases, we use a loop that runs $t$ times, reading $X$ and $Y$ for each test case and applying simple `if-else` branching to print the correct outcome.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. Reading the input and performing basic comparisons takes constant time. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which comfortably runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few primitive integer variables ($T$, $X$, $Y$) are used.

## Solution Code

```cpp
#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (y > x) {
            cout << "PROFIT\n";
        } else if (y < x) {
            cout << "LOSS\n";
        } else {
            cout << "NEUTRAL\n";
        }
    }
    return 0;
}
```