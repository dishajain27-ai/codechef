# [Lunchtime (LTIME)](https://www.codechef.com/problems/LTIME)

- **Difficulty Rating**: 352
- **Solved in**: 1 attempt(s)

---

## Problem Summary
The problem asks us to determine whether a given hour $X$ falls within the "lunchtime" range. According to the problem statement, lunchtime occurs between $1$ and $4$ hours (inclusive) on the Chef's 24-hour clock. For each test case, we are given an integer $X$, and we need to output `YES` if $1 \le X \le 4$, and `NO` otherwise.

---

## Intuition & Mathematical Observation
The valid hours for lunchtime are strictly defined as the set of numbers $\{1, 2, 3, 4\}$. 

Instead of writing multiple conditional statements, we can use a frequency map or a direct range check to verify if the given integer $X$ belongs to this set. If $X$ is between $1$ and $4$ inclusive, the answer is `YES`; otherwise, it is `NO`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. Checking membership in a fixed-size map or doing a simple range comparison takes constant time. Thus, for $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as the lookup map only stores a constant number of elements ($4$ elements).

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
        
        // Use a frequency map/counter approach to check valid lunchtime hours (1 to 4 inclusive)
        map<int, bool> lunchtime_map;
        for (int i = 1; i <= 4; i++) {
            lunchtime_map[i] = true;
        }

        // Check if the current time X is a valid lunchtime
        if (lunchtime_map[x]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```