# [Greater Average (AVGPROBLEM)](https://www.codechef.com/problems/AVGPROBLEM)

- **Difficulty Rating**: 500
- **Solved in**: 1 attempt(s)

## Problem Summary
Given three numbers $A$, $B$, and $C$, we need to determine if the average of $A$ and $B$ is strictly greater than $C$. If it is, output `YES`; otherwise, output `NO`.

## Intuition & Mathematical Observation
The average of two numbers $A$ and $B$ is given by the formula:
$$\text{Average} = \frac{A + B}{2}$$

We are asked to check if:
$$\frac{A + B}{2} > C$$

To avoid potential floating-point precision issues or to make the comparison simpler, we can also cross-multiply the inequality (since $2 > 0$):
$$A + B > 2C$$

In the provided solution, floating-point division using `double` is used directly, which is safe and accurate enough for the given constraints.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, as the solution only performs basic arithmetic operations and comparisons. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$, since we only use a few variables to store the inputs and the computed average.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        double a, b, c;
        cin >> a >> b >> c;

        // Calculate average and check if it's strictly greater than C
        double avg = (a + b) / 2.0;
        if (avg > c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```