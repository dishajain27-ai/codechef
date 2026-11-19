# [The Three Topics (THREETOPICS)](https://www.codechef.com/problems/THREETOPICS)

- **Difficulty Rating**: 573
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef has prepared three specific topics for an upcoming contest, denoted by the integers $A$, $B$, and $C$. On the day of the contest, a topic $X$ is chosen. We need to determine whether the chosen topic $X$ is one of the three topics that Chef prepared ($A$, $B$, or $C$). 

If $X$ matches any of the prepared topics, output `Yes`; otherwise, output `No`.

---

## Intuition & Mathematical Observation
The problem simply asks for membership testing in a small, fixed-size set. We are given four integers: $A$, $B$, $C$, and $X$. 

To solve this, we only need to check if the value of $X$ is equal to $A$, $B$, or $C$. Since there are only three possible matches, a straightforward conditional check using the logical OR operator (`||`) is sufficient and runs instantly.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$. The solution performs a constant number of basic arithmetic and comparison operations, making it extremely fast.
- **Space Complexity**: $\mathcal{O}(1)$. Only a few integer variables are used to store the input values, requiring constant extra memory.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, x;
    if (cin >> a >> b >> c >> x) {
        // Check if the given topic X matches any of the prepared topics A, B, or C
        if (x == a || x == b || x == c) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
```