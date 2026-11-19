# [Water Requirement (WATERREQ)](https://www.codechef.com/problems/WATERREQ)

- **Difficulty Rating**: 351
- **Solved in**: 2 attempt(s)

---

## Problem Summary
Chef has a water cooler that requires $2$ liters of water per hour to cool the room. Given the number of hours the cooler needs to run ($N$), we need to calculate the total amount of water (in liters) required for that duration.

---

## Intuition & Mathematical Observation
The problem states that for every $1$ hour of operation, the cooler consumes $2$ liters of water. 
Therefore, if the cooler runs for $N$ hours, the total water required is simply $N$ multiplied by $2$.

$$\text{Total Water} = N \times 2$$

---

## Complexity Analysis

- **Time Complexity**: $O(1)$ per test case, as it only involves a single multiplication and output operation. For $T$ test cases, the total time complexity is $O(T)$.
- **Space Complexity**: $O(1)$, because we only use a constant amount of memory for variables.

---

## Solution Code

```cpp
#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << n * 2 << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
```