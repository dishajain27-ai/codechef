# [ATM (HS08TEST)](https://www.codechef.com/problems/HS08TEST)

- **Difficulty Rating**: 410
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Pooja wants to withdraw $X$ US Dollars from her ATM. The cash machine only accepts transaction amounts that are multiples of $5$. For every successful withdrawal, the bank charges a flat transaction fee of $0.50$ Dollars. 

We need to calculate her final account balance after the transaction attempt:
- If the withdrawal amount is a multiple of $5$ **and** her account balance is sufficient to cover both the withdrawal amount and the $0.50$ bank charge (i.e., Balance $\ge X + 0.50$), the transaction succeeds and the amount is deducted.
- Otherwise, the transaction fails, and her account balance remains unchanged.

Finally, we must output the balance with exactly two digits after the decimal point.

---

## Intuition & Mathematical Observation
To solve this problem successfully, we need to validate two specific conditions before performing the withdrawal:
1. **Multiple of 5 condition:** `x % 5 == 0` (Since $X$ is an integer, we use the modulo operator).
2. **Sufficient funds condition:** `y >= x + 0.50` (The total amount deducted from the account includes both the requested cash and the transaction fee).

If both conditions are met, the new balance is updated using the formula:
$$\text{New Balance} = Y - (X + 0.50)$$

If either condition fails, the balance $Y$ remains unmodified. To format the floating-point output correctly to two decimal places, we use `std::fixed` and `std::setprecision(2)` in C++.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ — The solution involves basic arithmetic operations and conditional checks, which execute in constant time.
- **Space Complexity**: $\mathcal{O}(1)$ — Only a fixed number of variables (`x` and `y`) are used, requiring constant auxiliary memory.

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
    double y;
    
    // Read the withdrawal amount and initial balance
    if (cin >> x >> y) {
        // Check if the withdrawal amount is a multiple of 5 
        // and if there is enough balance to cover the amount plus 0.50 transaction fee.
        if (x % 5 == 0 && y >= (x + 0.50)) {
            y -= (x + 0.50);
        }
        
        // Output the final balance with exactly two digits of precision
        cout << fixed << setprecision(2) << y << "\n";
    }

    return 0;
}
```