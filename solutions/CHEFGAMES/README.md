# [Chefland Games (CHEFGAMES)](https://www.codechef.com/problems/CHEFGAMES)

- **Difficulty Rating**: 550
- **Solved in**: 1 attempt(s)

---

## Problem Summary
In a tennis match in Chefland, a decision about whether the ball is **IN** or **OUT** is made by $4$ different referees. 
- Each referee gives their decision as an integer:
  - `0` if they think the ball is **IN**.
  - `1` if they think the ball is **OUT**.

The ball is considered **IN** if and only if **all $4$ referees** agree that the ball is **IN**. If even a single referee calls it **OUT**, the final decision is **OUT**. 

Given the decisions of the $4$ referees ($R_1, R_2, R_3, R_4$), we need to determine the final decision of the game.

---

## Intuition & Mathematical Observation
Since a vote of `0` represents **IN** and a vote of `1` represents **OUT**:
- If all referees agree the ball is **IN**, every referee's decision will be `0`. The sum of all decisions ($R_1 + R_2 + R_3 + R_4$) will be $0 + 0 + 0 + 0 = 0$.
- If **any** referee considers the ball to be **OUT**, their value will be `1`. Since all decision values are non-negative ($0$ or $1$), the presence of even a single `1` will make the sum strictly greater than $0$.

Thus, the condition for the ball being **IN** simply boils down to checking if the sum of all four referee decisions equals $0$.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We perform a constant number of arithmetic operations and comparisons. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as we only use a few integer variables to store the inputs.

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
        int r1, r2, r3, r4;
        cin >> r1 >> r2 >> r3 >> r4;
        
        // The ball is IN if and only if all referees agree (sum of decisions is 0)
        if (r1 + r2 + r3 + r4 == 0) {
            cout << "IN\n";
        } else {
            cout << "OUT\n";
        }
    }

    return 0;
}
```