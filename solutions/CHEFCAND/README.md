# [Chef and Candies (CHEFCAND)](https://www.codechef.com/problems/CHEFCAND)

- **Difficulty Rating**: 570
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef needs to distribute candies to $N$ children. Currently, Chef has $X$ candies in his possession. Candies are only sold in packets, and each packet contains exactly $4$ candies. 

The task is to find the minimum number of candy packets Chef needs to buy so that he has at least $N$ candies in total. If Chef already has enough candies (i.e., $X \ge N$), he doesn't need to buy any packets.

## Intuition & Mathematical Observation
1. **Sufficient Candies Check:** If Chef already has at least $N$ candies ($X \ge N$), the answer is simply `0` because no additional packets are needed.
2. **Deficit Calculation:** If $X < N$, Chef falls short by $\text{rem} = N - X$ candies.
3. **Packet Division:** Since candies come in packs of $4$, we need to find the smallest integer number of packets $K$ such that $4 \times K \ge \text{rem}$. 
   - Mathematically, this is equivalent to finding the ceiling of $\frac{\text{rem}}{4}$.
   - In integer arithmetic, $\lceil \frac{A}{B} \rceil$ can be calculated as `(A + B - 1) / B`. 
   - Here, substituting $A = \text{rem}$ and $B = 4$, the formula becomes `(rem + 3) / 4`.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase, as the solution only involves a few basic arithmetic operations. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily executes well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, since only a few scalar variables are used.

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
        int n, x;
        cin >> n >> x;

        // If Chef already has enough candies, he needs 0 packets
        if (x >= n) {
            cout << 0 << "\n";
        } else {
            // Calculate remaining candies needed, rounded up to the nearest multiple of 4
            int rem = n - x;
            int ans = (rem + 3) / 4;
            cout << ans << "\n";
        }
    }

    return 0;
}
```