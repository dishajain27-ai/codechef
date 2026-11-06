# [Off By One (OFFBY1)](https://www.codechef.com/problems/OFFBY1)

- **Difficulty Rating**: 271
- **Solved in**: 1 attempt(s)

---

## Problem Summary
You are given two integers, $A$ and $B$. Your task is to calculate their standard sum ($A + B$) and then "append" the digit `1` to the end of this resulting sum. In decimal notation, appending a `1` to a number is equivalent to multiplying that number by $10$ and adding $1$.

---

## Intuition & Mathematical Observation
1. First, compute the normal sum of the two input numbers: `sum = A + B`.
2. Next, the problem statement requires appending the digit `1` to the right of this sum. For example, if the sum is `12`, appending `1` makes it `121`. Mathematically, this can be achieved by shifting the digits of the sum one place to the left in base 10 (i.e., multiplying by 10) and then adding 1.
3. Therefore, the required result is given by the formula: 
   $$\text{Result} = (A + B) \times 10 + 1$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$. The solution performs a constant number of basic arithmetic operations.
- **Space Complexity**: $\mathcal{O}(1)$. Only a few integer variables are used to store the input and result.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    if (cin >> a >> b) {
        // Calculate standard sum and append '1' to the end (which means sum * 10 + 1)
        int result = (a + b) * 10 + 1;
        cout << result << "\n";
    }

    return 0;
}
```