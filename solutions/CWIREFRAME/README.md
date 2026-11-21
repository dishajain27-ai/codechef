# [Chef and Wire Frames (CWIREFRAME)](https://www.codechef.com/problems/CWIREFRAME)

- **Difficulty Rating**: 383
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef needs to run a wire around a rectangular plate of length $N$ cm and breadth $M$ cm. The cost of the wire is $X$ rupees per centimeter. We need to find the total cost required to frame the plate completely.

---

## Intuition & Mathematical Observation
1. The wire needs to go around the entire perimeter of the rectangular plate.
2. The formula for the perimeter ($P$) of a rectangle with length $N$ and breadth $M$ is:
   $$P = 2 \times (N + M)$$
3. Since the cost per centimeter is $X$ rupees, the total cost can be calculated by multiplying the perimeter by $X$:
   $$\text{Total Cost} = P \times X = 2 \times (N + M) \times X$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, as it only involves basic arithmetic operations. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$, since we only use a few variables to store the inputs and the result.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, x;
        cin >> n >> m >> x;

        // Perimeter of the rectangular plate = 2 * (N + M)
        long long perimeter = 2 * (n + m);

        // Total cost = perimeter * cost per cm
        long long total_cost = perimeter * x;

        cout << total_cost << "\n";
    }

    return 0;
}
```