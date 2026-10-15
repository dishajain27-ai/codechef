# [Small factorials (FCTRL2)](https://www.codechef.com/problems/FCTRL2)

- **Difficulty Rating**: 648
- **Solved in**: 1 attempt(s)

## Problem Summary

The problem asks us to calculate the factorial of a given integer $N$ (where $1 \le N \le 100$). Since factorials grow extremely fast, even for $N = 100$, the result ($100!$) contains 158 digits, which far exceeds the maximum capacity of standard integer data types like `long long` (which maxes out around $20!$). Therefore, the solution must handle **arbitrary-precision integer arithmetic** (often referred to as "BigInt").

## Intuition & Mathematical Observation

To compute $N! = 1 \times 2 \times 3 \times \dots \times N$ without running into integer overflow, we can simulate manual multiplication (the way we do multiplication on paper).

1. **Storage**: We can store the resulting large number in a `std::vector<int>`, where each element of the vector represents a single digit of the number. To make multiplication and carry propagation easier, we store the digits in **reverse order** (least significant digit at index `0`, most significant digit at the last index).
2. **Multiplication process**: 
   - We start with a vector containing just `[1]` (since $1! = 1$).
   - We then iterate $i$ from $2$ to $N$, and multiply our current vector by $i$.
   - During the multiplication function, we iterate through the existing digits, multiply each by $i$, add any carry from the previous digit, update the current digit, and compute the new carry.
   - If there is any carry left over after processing all digits, we append it to the vector digit by digit.
3. **Output**: Finally, we print the vector in reverse order (from the last element down to index `0`) to get the correct decimal representation of the factorial.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(N \times \text{number of digits in } N!)$. For $N = 100$, $100!$ has 158 digits. The algorithm performs roughly $N \times (\text{number of digits})$ single-digit multiplications, which takes a few thousand operations at most. This executes well within the time limit (typically $\le 0.05$ seconds).
- **Space Complexity**: $\mathcal{O}(\text{number of digits in } N!)$ to store the result in the vector, which requires a negligible amount of memory (at most ~160 integers for $N = 100$).

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to multiply a large number (stored as a vector of digits) by a single integer
void multiply(vector<int>& res, int num) {
    int carry = 0;
    for (size_t i = 0; i < res.size(); i++) {
        int prod = res[i] * num + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to calculate and print the factorial of n
void solve() {
    int n;
    cin >> n;
    
    // Vector to store digits of the factorial in reverse order
    vector<int> res;
    res.push_back(1);
    
    for (int i = 2; i <= n; i++) {
        multiply(res, i);
    }
    
    // Print digits from most significant to least significant
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << "\n";
}

int main() {
    // Optimize standard input/output streams for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
```