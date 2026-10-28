# [Battery Health (BTRYHLTH)](https://www.codechef.com/problems/BTRYHLTH)

- **Difficulty Rating**: 296
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Apple considers the battery health of an iPhone to be optimal if it is greater than or equal to $80\%$. Given the battery health percentage $X$ of a phone, we need to determine whether it is optimal or not. We should output `YES` if the battery health is $\ge 80$, and `NO` otherwise.

---

## Intuition & Mathematical Observation
The problem requires a direct conditional check. We are given a single integer $X$ representing the battery health percentage for each test case. 

According to the problem statement:
- If $X \ge 80$, the battery is optimal $\rightarrow$ Print `YES`
- If $X < 80$, the battery is not optimal $\rightarrow$ Print `NO`

Thus, a simple `if-else` statement is sufficient to solve the problem efficiently.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a constant number of operations (comparison and I/O) for each test case. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as no additional data structures are used.

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
        int x;
        cin >> x;
        // Battery health >= 80 is considered optimal
        if (x >= 80) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```