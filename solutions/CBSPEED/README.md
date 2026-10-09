# [Chef and Brain Speed (CBSPEED)](https://www.codechef.com/problems/CBSPEED)

- **Difficulty Rating**: 288
- **Solved in**: 1 attempt(s)

## Problem Summary
In this problem, we are given two integers:
1. $X$: The threshold limit of Chef's brain speed.
2. $Y$: Chef's current working speed.

We need to determine if Chef is working fast enough to be prone to errors. Specifically, we must output `YES` if Chef's current speed ($Y$) is strictly greater than the threshold ($X$). Otherwise, we output `NO`.

---

## Intuition & Mathematical Observation
The problem requires a direct comparison between two integers, $X$ and $Y$. 
- If $Y > X$, Chef's brain speed exceeds the threshold limit, meaning he is prone to errors $\rightarrow$ Print `YES`.
- If $Y \le X$, Chef's brain speed is within the safe limit $\rightarrow$ Print `NO`.

This can be implemented using a simple conditional (`if-else`) statement.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$. The solution only performs a single comparison and standard I/O operations, which take constant time.
- **Space Complexity**: $\mathcal{O}(1)$. No extra space or data structures are used beyond a couple of integer variables.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int threshold, current_speed;
    if (cin >> threshold >> current_speed) {
        // If the current working speed is strictly greater than the threshold, Chef is prone to errors.
        if (current_speed > threshold) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```