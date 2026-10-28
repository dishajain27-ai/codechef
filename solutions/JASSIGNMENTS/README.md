# [Janmansh and Assignments (JASSIGNMENTS)](https://www.codechef.com/problems/JASSIGNMENTS)

- **Difficulty Rating**: 513
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Janmansh has to submit his assignments which take **3 hours** to complete. He starts working on them at $X$ PM. The absolute deadline for submission is **10 PM**. 

We need to determine whether Janmansh can finish his assignments on time (i.e., at or before 10 PM). If he can finish by 10 PM, output `"Yes"`; otherwise, output `"No"`.

---

## Intuition & Mathematical Observation
- Janmansh starts at hour $X$ and requires $3$ hours of continuous work.
- The completion time will be $X + 3$.
- The latest he is allowed to finish is $10$ PM.
- Therefore, the condition for him to finish on time is:
  $$\text{Completion Time} \le 10$$
  $$X + 3 \le 10$$

If this inequality holds true, print `Yes`; otherwise, print `No`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. Since there are $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few integer variables are used.

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
        int x;
        cin >> x;
        // Janmansh needs 3 hours and must finish by 10 pm.
        // So he must start by 10 - 3 = 7 pm.
        if (x + 3 <= 10) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}
```