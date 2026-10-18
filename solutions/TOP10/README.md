# [Masterchef finals (TOP10)](https://www.codechef.com/problems/TOP10)

- **Difficulty Rating**: 255
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef has competed in a cooking competition and secured a rank of $X$. We need to determine whether Chef has made it to the **top 10** contestants. If his rank is $10$ or better (i.e., less than or equal to 10), output `"YES"`; otherwise, output `"NO"`.

---

## Intuition & Mathematical Observation
The problem requires checking a simple threshold condition. 
- A rank $X$ is considered in the "top 10" if and only if $X \le 10$.
- We can directly use an `if-else` conditional statement to evaluate the rank for each test case.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, as it only involves a single comparison and standard I/O operations. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ since we only use a constant amount of extra space to store the input variables.

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
        
        // Chef makes it to the top 10 if his rank X is less than or equal to 10
        if (x <= 10) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```