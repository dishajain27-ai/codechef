# [Car Trip (CARTRIP)](https://www.codechef.com/problems/CARTRIP)
- **Difficulty Rating**: 374
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef wants to rent a car for a trip. The car rental company charges **Rs. 10 per kilometer**. However, there is a minimum charging policy: even if Chef travels less than $300$ kilometers, he **must pay for at least $300$ kilometers**. 

Given the distance $X$ (in kilometers) that Chef actually plans to travel, we need to calculate the total cost he has to pay.

---

## Intuition & Mathematical Observation
The problem essentially boils down to calculating the effective distance for which Chef is billed:
1. If Chef travels $X$ kilometers where $X < 300$, the billed distance is forced to be $300$ kilometers due to the minimum limit.
2. If Chef travels $X$ kilometers where $X \ge 300$, he is billed for the exact distance $X$.

We can compactly represent this using the $\max$ function:
$$\text{Effective Distance} = \max(X, 300)$$

Once we have the effective distance, the total cost is simply obtained by multiplying it by the rate of Rs. 10 per kilometer:
$$\text{Total Cost} = \text{Effective Distance} \times 10$$

---

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case. The solution only involves basic arithmetic operations and comparisons. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few variables are used to store the input and result.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    long long x;
    cin >> x;
    
    // Chef must pay for at least 300 kms
    long long effective_distance = max(x, 300LL);
    
    // Cost is Rs 10 per km
    cout << effective_distance * 10 << "\n";
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}
```