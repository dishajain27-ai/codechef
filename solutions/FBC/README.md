# [Fill the Bucket (FBC)](https://www.codechef.com/problems/FBC)

- **Difficulty Rating**: 419
- **Solved in**: 1 attempt(s)

## Problem Summary
We have a bucket with a total capacity of $K$ liters. Currently, the bucket already contains $X$ liters of water. We need to find out how much *additional* water can be poured into the bucket before it reaches its maximum capacity and overflows. 

In other words, we need to calculate the remaining empty space in the bucket, which is given by $K - X$.

---

## Intuition & Mathematical Observation
The problem asks for the difference between the total capacity ($K$) and the current amount of water ($X$). Since the bucket can hold a maximum of $K$ liters and already has $X$ liters, the amount of extra water we can add is simply:
$$\text{Remaining Capacity} = K - X$$

We are given the number of test cases $t$, and for each test case, we just need to read $K$ and $X$ and print $K - X$.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a single subtraction operation. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$. No extra space or data structures are used beyond a few integer variables.

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
        int k, x;
        cin >> k >> x;
        // The maximum extra water is the total capacity minus the current water
        cout << k - x << "\n";
    }

    return 0;
}
```