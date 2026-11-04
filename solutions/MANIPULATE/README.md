# [Ezio and Guards (MANIPULATE)](https://www.codechef.com/problems/MANIPULATE)

- **Difficulty Rating**: 427
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Ezio can manipulate at most $X$ number of guards. Given that there are $Y$ guards standing in front of him, we need to determine whether Ezio can manipulate all of them. Output `"YES"` if he can manipulate all the guards, and `"NO"` otherwise.

---

## Intuition & Mathematical Observation
Ezio's maximum capacity to manipulate guards is $X$. The total number of guards he faces is $Y$. 
- For Ezio to successfully manipulate all the guards, his capacity $X$ must be greater than or equal to the number of guards $Y$.
- If $X \ge Y$, he can handle them all, so we print `"YES"`.
- If $X < Y$, he does not have enough capacity, so we print `"NO"`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase. Since there are $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few integer variables are used.

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
        int x, y;
        cin >> x >> y;
        
        // Ezio can manipulate all guards if the number of guards (y) 
        // is less than or equal to his maximum capacity (x).
        if (x >= y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
```