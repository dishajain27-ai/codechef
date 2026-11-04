# [Course Registration (COURSEREG)](https://www.codechef.com/problems/COURSEREG)

- **Difficulty Rating**: 470
- **Solved in**: 1 attempt(s)

---

## Problem Summary

There is a course with a maximum capacity of $M$ students. Currently, $K$ students have already registered for the course. You and your $N$ friends (a total of $N$ students) want to register for this same course. 

We need to determine if all $N$ of you can successfully register for the course without exceeding the maximum capacity $M$. Output `"Yes"` if it is possible, and `"No"` otherwise.

---

## Intuition & Mathematical Observation

To successfully register all $N$ friends into the course, the sum of the students already registered ($K$) and the new students wanting to register ($N$) must not exceed the maximum capacity ($M$).

Mathematically, the condition can be written as:
$$\text{Total Students} = K + N \le M$$

If this inequality holds true, everyone can join, and we output `"Yes"`. Otherwise, the course would overflow, so we output `"No"`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a few basic arithmetic operations and comparisons. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a few integer variables to store the inputs.

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
        int n, m, k;
        cin >> n >> m >> k;

        // Total students after our friends register must be <= maximum capacity M
        // i.e., k + n <= m
        if (k + n <= m) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
```