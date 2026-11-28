# [Expert Setter (EXPERT)](https://www.codechef.com/problems/EXPERT)

- **Difficulty Rating**: 561
- **Solved in**: 1 attempt(s)

## Problem Summary
A problem setter proposes a total of $X$ problems for a contest, out of which $Y$ problems are approved. A setter is considered an "Expert" if at least $50\%$ (half) of their proposed problems are approved. 

Given $X$ and $Y$ for multiple test cases, we need to determine whether the setter is an Expert or not. Output `"YES"` if they are an Expert, and `"NO"` otherwise.

---

## Intuition & Mathematical Observation

To check if $Y$ is at least $50\%$ of $X$, we need to evaluate the condition:
$$\frac{Y}{X} \ge \frac{1}{2}$$

To avoid floating-point precision issues and division by zero (though $X \ge 1$ usually applies), we can cross-multiply the inequality:
$$2 \cdot Y \ge X$$

Thus, if $2Y \ge X$, the setter is an Expert (`"YES"`). Otherwise, they are not (`"NO"`).

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. Since there are $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily passes within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few variables are used to store the inputs.

---

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
        
        // Check if at least 50% of the problems are approved (y >= x / 2)
        // Using 2 * y >= x avoids floating point division issues.
        if (2 * y >= x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```