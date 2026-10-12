# [Best of Two (BESTOFTWO)](https://www.codechef.com/problems/BESTOFTWO)

- **Difficulty Rating**: 284
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Alice and Bob play a game consisting of two rounds. Alice's scores in the two rounds are given as integers $X$ and $Y$. We need to find the maximum score that Alice achieved in either of the two rounds.

---

## Intuition & Mathematical Observation
The problem simply asks for the maximum of two given numbers, $X$ and $Y$. Since Alice's final result is determined by her best performance between the two rounds, we can directly compare $X$ and $Y$ and output the larger value. In C++, this can be efficiently done using the built-in `max(x, y)` function.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. Finding the maximum of two numbers takes constant time. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$. No extra memory is used beyond a few variables to store the input.

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
        int x, y;
        cin >> x >> y;
        // Output the maximum of the two scores
        cout << max(x, y) << "\n";
    }
    
    return 0;
}
```