# [Donation Drive (DONDRIVE)](https://www.codechef.com/problems/DONDRIVE)

- **Difficulty Rating**: 272
- **Solved in**: 1 attempt(s)

---

## Problem Summary
A charity organization has set a target to collect a total of $N$ blood donation units. So far, they have already collected $X$ units. The task is to determine how many more units of blood are needed to reach the target $N$. 

For each test case, given two integers $N$ and $X$, we need to output the remaining amount of donations required, which is $N - X$.

---

## Intuition & Mathematical Observation
The problem directly translates to basic arithmetic. 
- The total goal is $N$.
- The current progress is $X$.
- Since $X$ units have already been collected, the remaining units needed to completely fulfill the goal without exceeding or falling short is simply the difference between the target and the current collection:
  $$\text{Remaining Donations} = N - X$$

Given the constraints typically found in problems of this difficulty, a simple subtraction per testcase is both necessary and sufficient.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase. We perform a single subtraction operation, resulting in an overall time complexity of $\mathcal{O}(T)$ for $T$ test cases, which runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few integer variables are used to store the input values.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        // The remaining donations needed is the difference between target and collected
        cout << n - x << "\n";
    }

    return 0;
}
```