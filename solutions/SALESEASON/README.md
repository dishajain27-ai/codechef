# [Sale Season (SALESEASON)](https://www.codechef.com/problems/SALESEASON)

- **Difficulty Rating**: 541
- **Solved in**: 1 attempt(s)

---

## Problem Summary

In this problem, we are given the initial price $X$ of an item before any discounts. Depending on the value of $X$, a specific discount amount is subtracted from the original price. We need to calculate and output the final discounted price for multiple test cases.

The discount rules based on the original price $X$ are:
- If $X \le 100$, no discount is applied ($0$).
- If $100 < X \le 1000$, a discount of $25$ is applied.
- If $1000 < X \le 5000$, a discount of $100$ is applied.
- If $X > 5000$, a discount of $500$ is applied.

---

## Intuition & Mathematical Observation

The problem can be solved directly by using conditional (`if-else`) statements to determine the applicable discount based on the given ranges of $X$. Once the correct discount is identified, the final price is simply $X - \text{discount}$. 

Since there are multiple test cases, we use a loop to process each test case independently. Fast I/O is also utilized to ensure the solution runs efficiently within the time limits.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase, as all comparisons and arithmetic operations take constant time. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$, since we only use a few variables to store the input and the calculated discount.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to calculate the final discounted price
void solve_case() {
    int x;
    cin >> x;
    
    int discount = 0;
    if (x <= 100) {
        discount = 0;
    } else if (x <= 1000) {
        discount = 25;
    } else if (x <= 5000) {
        discount = 100;
    } else {
        discount = 500;
    }
    
    cout << x - discount << "\n";
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