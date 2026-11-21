# [Miami GP (F1RULE)](https://www.codechef.com/problems/F1RULE)

- **Difficulty Rating**: 487
- **Solved in**: 1 attempt(s)

---

## Problem Summary
In Formula 1, drivers must set a lap time within 107% of the fastest lap time during the qualifying session to be allowed to race. 

Given two integers:
- $X$: The fastest lap time recorded.
- $Y$: Chef's lap time.

We need to determine whether Chef qualifies for the race. That is, we must check if $Y$ is less than or equal to $107\%$ of $X$. If he qualifies, output `"YES"`; otherwise, output `"NO"`.

---

## Intuition & Mathematical Observation
The condition for qualification is:
$$Y \le 107\% \text{ of } X$$

Mathematically, this can be written as:
$$Y \le X \times \frac{107}{100}$$

To avoid potential floating-point precision errors (which are common with division and decimals in programming), we can cross-multiply the inequality to use strictly integer arithmetic:
$$Y \times 100 \le X \times 107$$

Thus, for each test case, we simply read $X$ and $Y$, evaluate the integer inequality `y * 100 <= x * 107`, and print the corresponding result.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. With $T$ test cases, the overall time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few variables are used to store the input values.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to check if Chef's time is within 107% of the fastest time.
// 107% of X is (X * 107) / 100.
// To avoid floating-point issues, we use integer multiplication: Y * 100 <= X * 107.
void solve_case() {
    long long x, y;
    cin >> x >> y;
    
    if (y * 100 <= x * 107) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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