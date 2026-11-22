# [MATH1 Enrolment (M1ENROL)](https://www.codechef.com/problems/M1ENROL)

- **Difficulty Rating**: 349
- **Solved in**: 1 attempt(s)

---

## Problem Summary
For a specific mathematics course, the university has $X$ seats currently available. However, there are $Y$ students who are interested in enrolling. The administration wants to know how many **additional** seats need to be added so that every interested student can get a seat. If the number of available seats is already greater than or equal to the number of interested students, no extra seats are needed (output $0$).

---

## Intuition & Mathematical Observation
The problem asks us to calculate the shortage of seats. 
- If the number of interested students ($Y$) is strictly greater than the available seats ($X$), the extra seats needed is simply the difference: $Y - X$.
- If $Y \le X$, all students can fit into the existing seats, meaning $0$ additional seats are required.

Thus, we can represent the answer mathematically as:
$$\text{Extra Seats} = \max(0, Y - X)$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase. With $T$ testcases, the overall time complexity is $\mathcal{O}(T)$, which easily executes well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as we only use a few integer variables to store the inputs.

---

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
        
        // If interested students (y) exceed available seats (x), we need the difference.
        // Otherwise, no extra seats are needed (0).
        if (y > x) {
            cout << y - x << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
```