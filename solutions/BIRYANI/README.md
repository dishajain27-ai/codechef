# [Biryani classes (BIRYANI)](https://www.codechef.com/problems/BIRYANI)

- **Difficulty Rating**: 257
- **Solved in**: 1 attempt(s)

---

## Problem Summary
According to the problem, a student takes $X$ classes per week, and the cost of each class is $Y$ coins. We need to find the total amount of money the student has to pay for all their classes in a week. This process needs to be repeated for $T$ independent test cases.

---

## Intuition & Mathematical Observation
The total cost for a week is simply the product of the number of classes taken per week ($X$) and the cost per class ($Y$). 

Mathematically, the total cost for a single test case can be represented as:
$$\text{Total Cost} = X \times Y$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a single multiplication operation. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a few variables to store the inputs $X$ and $Y$.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to process each individual test case
void solve() {
    long long x, y;
    cin >> x >> y;
    cout << x * y << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
```