# [Discount (DISCNT)](https://www.codechef.com/problems/DISCNT)

- **Difficulty Rating**: 401
- **Solved in**: 1 attempt(s)

## Problem Summary
You are given an item whose marked price is $100$. A shop offers a discount of $x$ percent on this item. You need to find the final amount you have to pay after applying the discount.

## Intuition & Mathematical Observation
The problem states that the original price of the item is $100$ and the discount is $x\%$. 
Since the base price is $100$, an $x$ percent discount means a reduction of $x$ units from the price. 
Therefore, the final amount to be paid is simply:
$$\text{Final Price} = 100 - x$$

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase, as it only requires a single subtraction operation. For $t$ test cases, the total time complexity is $\mathcal{O}(t)$.
- **Space Complexity**: $\mathcal{O}(1)$, since we only use a few integer variables to store the input and output.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        // The original price is 100, and there is a discount of x percent.
        // Therefore, the amount to pay is 100 - x.
        cout << 100 - x << "\n";
    }
    
    return 0;
}
```