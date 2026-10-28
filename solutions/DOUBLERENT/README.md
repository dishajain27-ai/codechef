# [Double Rent (DOUBLERENT)](https://www.codechef.com/problems/DOUBLERENT)

- **Difficulty Rating**: 234
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef currently pays $X$ rupees for his rental accommodation. However, the landlord has decided to double the rent. We need to calculate and output the new rent that Chef has to pay, which is twice his current rent ($2 \times X$).

---

## Intuition & Mathematical Observation
The problem is a straightforward arithmetic operation. Given the current rent $X$, the new doubled rent can be found simply by multiplying $X$ by 2. 

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$. The solution performs a single constant-time multiplication and I/O operation.
- **Space Complexity**: $\mathcal{O}(1)$. Only a single integer variable is used to store the input.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    
    // Output the doubled rent
    cout << 2 * x << "\n";

    return 0;
}
```