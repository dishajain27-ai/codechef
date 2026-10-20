# [Audible Range (AUDIBLE)](https://www.codechef.com/problems/AUDIBLE)

- **Difficulty Rating**: 279
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Human beings can hear sounds with frequencies ranging from **67 Hertz to 45,000 Hertz** (inclusive). Given a frequency $X$ (in Hertz), we need to determine whether a human can hear a sound of this frequency. If $X$ falls within the audible range, output `YES`; otherwise, output `NO`.

---

## Intuition & Mathematical Observation
The problem directly maps to a simple range-checking condition. A frequency $X$ is audible if and only if it satisfies the inequality:

$$67 \le X \le 45000$$

Since the problem includes multiple test cases, we can process each test case independently in constant time $O(1)$ by using a standard conditional `if-else` statement.

---

## Complexity Analysis

- **Time Complexity**: $O(1)$ per testcase. For $T$ test cases, the total time complexity is $O(T)$, which easily runs well within the time limit.
- **Space Complexity**: $O(1)$ auxiliary space, as only a few scalar variables are used.

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
        
        // Check if frequency X is within the audible range [67, 45000]
        if (x >= 67 && x <= 45000) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```