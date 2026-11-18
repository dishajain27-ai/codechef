# [Minimum Pizzas (MINPIZZA)](https://www.codechef.com/problems/MINPIZZA)

- **Difficulty Rating**: 546
- **Solved in**: 1 attempt(s)

---

## Problem Summary

There are $N$ friends, and each friend wants to eat $X$ slices of pizza. A single pizza always contains exactly $4$ slices. The objective is to find the **minimum number of whole pizzas** that must be ordered so that all friends can get at least $X$ slices.

---

## Intuition & Mathematical Observation

1. **Calculate Total Slices Needed**: 
   Since there are $N$ friends and each requires $X$ slices, the total number of slices required is:
   $$\text{Total Slices} = N \times X$$

2. **Calculate Minimum Pizzas**: 
   Since each pizza contains $4$ slices, the number of pizzas needed is $\frac{N \times X}{4}$. However, we cannot order a fraction of a pizza. If the total number of slices is not a multiple of $4$, we must round up to the next whole pizza (i.e., take the ceiling of the division).

3. **Integer Arithmetic for Ceiling Division**: 
   Instead of using floating-point arithmetic (which can lead to precision errors), we can compute the ceiling division using integer arithmetic with the formula:
   $$\lceil A / B \rceil = \frac{A + B - 1}{B}$$
   
   Substituting $A = N \times X$ and $B = 4$:
   $$\text{Minimum Pizzas} = \frac{(N \times X) + 3}{4}$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. The solution uses basic arithmetic operations, making it extremely fast. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few variables are used to store the inputs and results.

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
        long long n, x;
        cin >> n >> x;
        
        // Total slices needed = N * X
        long long total_slices = n * x;
        
        // Each pizza has 4 slices. We need the ceiling of (total_slices / 4).
        // Using integer arithmetic: (total_slices + 3) / 4
        long long min_pizzas = (total_slices + 3) / 4;
        
        cout << min_pizzas << "\n";
    }
    
    return 0;
}
```