# [Oneful Pairs (ONEFULPAIRS)](https://www.codechef.com/problems/ONEFULPAIRS)

- **Difficulty Rating**: 374
- **Solved in**: 1 attempt(s)

---

## Problem Summary
The problem defines a "Oneful Pair" as a pair of integers $(a, b)$ that satisfies the following equation:
$$a + b + (a \times b) = 111$$

Given two integers $a$ and $b$, we need to determine whether they form a Oneful Pair. If the condition holds true, output `Yes`; otherwise, output `No`.

---

## Intuition & Mathematical Observation
The problem is a straightforward implementation task. We are given the exact algebraic condition for a Oneful Pair:
1. Compute the sum of the two numbers: $a + b$
2. Compute the product of the two numbers: $a \times b$
3. Add the sum and the product together: $(a + b) + (a \times b)$
4. Check if the final result equals `111`.

Since the constraints on $a$ and $b$ are small and standard integer types can handle the operations easily, a simple conditional check is sufficient.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$  
  The solution performs a fixed number of arithmetic operations (addition and multiplication) and comparisons, which run in constant time.

- **Space Complexity**: $\mathcal{O}(1)$  
  Only a few variables (`a` and `b`) are used to store the input, requiring constant extra space.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to check if the given pair is a Oneful Pair
bool isOnefulPair(long long a, long long b) {
    return (a + b + (a * b)) == 111;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b;
    if (cin >> a >> b) {
        if (isOnefulPair(a, b)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}
```