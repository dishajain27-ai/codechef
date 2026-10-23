# [Finding Square Roots (FSQRT)](https://www.codechef.com/problems/FSQRT)

- **Difficulty Rating**: 420
- **Solved in**: 2 attempt(s)

## Problem Summary
The problem requires us to find the square root of a given integer $N$. Since the answer might not always be a whole number, we are explicitly asked to output the square root **rounded down to the nearest integer** (floor of the square root). We are given multiple test cases, and the solution must efficiently process each query.

## Intuition & Mathematical Observation
1. **Square Root Function**: C++ provides the `sqrt()` function inside the `<cmath>` header, which calculates the square root of a number as a floating-point value (`double`).
2. **Integer Conversion**: By casting the resulting floating-point square root to an integer (`static_cast<int>(sqrt(n))`), we effectively truncate any fractional part, which naturally gives the floor of the square root for all positive integers.
3. **Fast I/O**: Because problems on CodeChef often have multiple test cases, using standard `cin` and `cout` can sometimes cause Time Limit Exceeded (TLE) if not optimized. Using `ios_base::sync_with_stdio(false); cin.tie(NULL);` ensures fast input/output operations.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase (or $\mathcal{O}(\log N)$ depending on internal CPU floating-point instruction sets, which is effectively constant time for standard integer ranges). For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a few integer variables to store the inputs and test case counts.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        // Compute and output the square root rounded down to the nearest integer
        cout << static_cast<int>(sqrt(n)) << "\n";
    }

    return 0;
}
```