# [Small Factorial (FLOW018)](https://www.codechef.com/problems/FLOW018)

- **Difficulty Rating**: 700
- **Solved in**: 1 attempt(s)

---

## Problem Summary
The task is to calculate the factorial of a given non-negative integer $N$ (denoted as $N!$). The factorial of a number $N$ is the product of all positive integers less than or equal to $N$:

$$N! = 1 \times 2 \times 3 \times \dots \times N$$

By definition, the factorial of $0$ is $1$ ($0! = 1$). 

The input provides an integer $T$ representing the number of test cases, followed by $T$ lines each containing a single integer $N$. For each test case, we need to output the value of $N!$.

---

## Intuition & Mathematical Observation
1. **Iterative Calculation**: The most direct way to compute $N!$ is to maintain a running product variable initialized to $1$ and loop from $i = 1$ to $N$, multiplying the variable by $i$ at each step.
2. **Handling $N = 0$**: If $N = 0$, the loop condition ($i \le 0$) is skipped, and the initial value of $1$ is correctly returned.
3. **Data Type Selection**: 
   - The problem constraints typically state that $N \le 20$. 
   - The value of $20!$ is $2,432,902,008,176,640,000$, which far exceeds the maximum value a standard 32-bit signed integer (`int`) can hold ($\approx 2.14 \times 10^9$).
   - Therefore, we must use a 64-bit integer (`long long` in C++) to prevent integer overflow.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(N)$ per testcase. For a total of $T$ test cases, the overall time complexity is $\mathcal{O}(\sum N)$. Given that $N \le 20$, the operations are extremely fast and well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as we only use a few scalar variables (`t`, `n`, `factorial`, and the loop iterator `i`) to compute the result.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Use long long because 20! exceeds the capacity of a standard 32-bit integer
        long long factorial = 1;
        
        // Calculate factorial iteratively
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << factorial << "\n";
    }

    return 0;
}
```