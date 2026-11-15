# [Valid Triangles (FLOW013)](https://www.codechef.com/problems/FLOW013)

- **Difficulty Rating**: 750
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Given three integers $A$, $B$, and $C$ representing the angles of a triangle, determine whether the triangle is valid or not. Output `"YES"` if the triangle is valid, and `"NO"` otherwise.

---

## Intuition & Mathematical Observation
In Euclidean geometry, a triangle is valid if and only if the sum of its internal angles is strictly equal to $180^\circ$. 

The problem constraints typically state that the angles are positive integers ($1 \le A, B, C \le 180$), so we do not need to check whether individual angles are greater than zero. We only need to verify the fundamental property of triangles:
$$A + B + C = 180$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, resulting in $\mathcal{O}(T)$ total time for $T$ test cases, where $T$ is the number of test cases. Basic arithmetic operations and I/O take constant time.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few integer variables are used to store the angles and the test case count.

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
        int a, b, c;
        cin >> a >> b >> c;
        
        // A triangle is valid if the sum of its three angles is exactly 180 degrees
        // and all angles are positive (which is guaranteed by constraints: 1 <= A,B,C <= 180)
        if (a + b + c == 180) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```