# [How many unattempted problems (PRACLIST)](https://www.codechef.com/problems/PRACLIST)

- **Difficulty Rating**: 264
- **Solved in**: 1 attempt(s)

---

## Problem Summary
You are given two integers:
- $X$: The total number of problems present in the practice list.
- $Y$: The number of problems you have already attempted.

Your task is to find and output the number of problems that remain **unattempted**.

---

## Intuition & Mathematical Observation
To find the number of unattempted problems, we simply need to subtract the number of attempted problems ($Y$) from the total number of problems ($X$). 

$$\text{Unattempted Problems} = X - Y$$

---

## Complexity Analysis

- **Time Complexity**: $O(1)$ — The solution involves a single arithmetic subtraction operation, which executes in constant time.
- **Space Complexity**: $O(1)$ — Only a couple of integer variables (`x` and `y`) are used, requiring constant extra space.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y;
    if (cin >> x >> y) {
        // The number of un-attempted problems is the total problems minus attempted problems
        cout << x - y << "\n";
    }
    
    return 0;
}
```