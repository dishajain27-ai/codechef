# [Sum it (SUMM)](https://www.codechef.com/problems/SUMM)

- **Difficulty Rating**: 308
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem asks us to determine whether the sum of two given numbers, $A$ and $B$, is equal to a third number, $C$. For each test case, we are given three integers $A$, $B$, and $C$, and we need to output `"YES"` if $A + B = C$, and `"NO"` otherwise.

## Intuition & Mathematical Observation
This is a straightforward conditional check problem. We are given $A$, $B$, and $C$, and we simply need to compute the arithmetic sum of $A$ and $B$ and compare it directly to $C$. 

Using `long long` for the variables is a good practice to prevent any potential integer overflow, although the standard constraints for 308-rated problems typically fit within standard integer limits.

## Complexity Analysis

- **Time Complexity**: $O(1)$ per test case. We perform a single addition and comparison operation, resulting in an overall time complexity of $O(T)$ for $T$ test cases.
- **Space Complexity**: $O(1)$. We only use a few variables to store the input values, requiring constant extra space.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        // Check if the sum of a and b equals c
        if (a + b == c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```