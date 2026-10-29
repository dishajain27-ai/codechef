# [Chairs Requirement (CHAIRS_)](https://www.codechef.com/problems/CHAIRS_)

- **Difficulty Rating**: 305
- **Solved in**: 1 attempt(s)

## Problem Summary
There are $X$ students attending an event and $Y$ chairs currently available in the room. We need to find the minimum number of extra chairs that must be purchased so that every student has a seat. If the number of chairs is already greater than or equal to the number of students, no extra chairs are needed.

## Intuition & Mathematical Observation
To ensure every student has a chair:
- If the number of students ($X$) is strictly greater than the number of chairs ($Y$), the shortage is $X - Y$. Therefore, we need to buy $X - Y$ extra chairs.
- If the number of students ($X$) is less than or equal to the number of chairs ($Y$), there are already enough (or excess) chairs, so we need to buy $0$ extra chairs.

This can be succinctly represented as $\max(0, X - Y)$.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We perform a simple comparison and subtraction, resulting in an overall time complexity of $\mathcal{O}(T)$ for $T$ test cases.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few integer variables are used.

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
        int x, y;
        cin >> x >> y;

        // If there are more students than chairs, we need to buy the difference.
        // Otherwise, we need 0 extra chairs.
        if (x > y) {
            cout << x - y << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
```