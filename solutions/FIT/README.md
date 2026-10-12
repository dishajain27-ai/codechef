# [Fitness (FIT)](https://www.codechef.com/problems/FIT)

- **Difficulty Rating**: 258
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef wants to be fit and decides to walk to his office and back home every single day. 
- The distance from Chef's home to his office is $X$ kilometers.
- Chef goes to the office and returns home every day, meaning he covers the distance **twice** daily.
- The office is open for **5 days a week**.

We need to calculate the total distance Chef walks in a week (5 days) for multiple test cases.

---

## Intuition & Mathematical Observation
1. **Daily Distance:** Since Chef walks to the office ($X$ km) and back home ($X$ km) each day, the total distance covered in a single day is:
   $$\text{Daily Distance} = 2 \times X$$

2. **Weekly Distance:** The office operates for 5 days a week. Therefore, the total distance covered in a week is:
   $$\text{Total Distance} = 5 \times (2 \times X) = 10 \times X$$

Thus, for any given input $X$, the answer is simply $10 \times X$.

---

## Complexity Analysis

- **Time Complexity:** $\mathcal{O}(1)$ per test case. We perform a simple multiplication, so for $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity:** $\mathcal{O}(1)$ as only a few variables are used to store the input and result.

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
        long long x;
        cin >> x;

        // Chef walks to office and back home: 2 * x kilometers per day.
        // Office is open 5 days a week: total distance = (2 * x) * 5 = 10 * x.
        long long total_distance = 10 * x;

        cout << total_distance << "\n";
    }

    return 0;
}
```