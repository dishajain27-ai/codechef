# [Sum of Digits (FLOW006)](https://www.codechef.com/problems/FLOW006)

- **Difficulty Rating**: 455
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Given an integer $N$, the objective is to calculate and output the sum of its individual digits. This operation needs to be performed for $T$ independent test cases.

---

## Intuition & Mathematical Observation
To extract the digits of a number one by one, we can use the modulo (`%`) and division (`/`) operators in base 10:
1. `n % 10` gives us the last digit of the number $N$.
2. `n / 10` removes the last digit from $N$.

By repeatedly applying these operations inside a `while` loop until $N$ becomes $0$, we can accumulate the sum of all digits.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(\log_{10} N)$ per testcase, because the number of digits in a number $N$ is proportional to $\log_{10} N$. For multiple test cases, the total time complexity is $\mathcal{O}(T \cdot \log_{10} N)$, which easily executes well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few variables (`sum`, `n`, `t`) are used to store the state.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to calculate the sum of digits of a given number N
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to process a single test case
void solve_case() {
    int n;
    cin >> n;
    cout << sumOfDigits(n) << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
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