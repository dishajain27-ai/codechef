# [Water Consumption (WATERCONS)](https://www.codechef.com/problems/WATERCONS)

- **Difficulty Rating**: 254
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef wants to drink at least $2000$ ml of water every day to stay healthy. Given that Chef drank $X$ ml of water today, determine whether he has met his daily goal. 

You need to output `"YES"` if Chef drank at least $2000$ ml of water, and `"NO"` otherwise. The problem includes multiple test cases.

---

## Intuition & Mathematical Observation
The problem requires a direct comparison between the amount of water Chef consumed ($X$) and the recommended daily target ($2000$ ml). 

- If $X \ge 2000$, Chef has achieved his target, so the answer is `"YES"`.
- If $X < 2000$, Chef has not achieved his target, so the answer is `"NO"`.

Since there are multiple test cases, we process each query independently in $O(1)$ time.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$, which easily fits within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a few scalar variables to store the inputs.

---

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
        int x;
        cin >> x;

        // Check if Chef drank at least 2000 ml of water
        if (x >= 2000) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```