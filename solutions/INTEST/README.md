# [Enormous Input Test (INTEST)](https://www.codechef.com/problems/INTEST)

- **Difficulty Rating**: 464
- **Solved in**: 1 attempt(s)

---

## Problem Summary

The goal of this problem is to process a very large number of integers and count how many of them are evenly divisible by a given integer $k$. 

- You are given two integers $n$ (the total number of inputs) and $k$ (the divisor).
- This is followed by $n$ integers, one per line.
- You need to output the count of numbers among the $n$ inputs that are multiples of $k$ (i.e., numbers $x$ where $x \pmod k == 0$).

---

## Intuition & Mathematical Observation

Since the input size $n$ can be extremely large (up to $10^7$ in typical CodeChef competitive programming environments), standard input/output methods in C++ (`cin` and `cout`) can cause a Time Limit Exceeded (TLE) error due to the overhead of synchronization with C-style I/O and flushing.

To solve this efficiently:
1. **Fast I/O**: We must optimize standard I/O streams using `ios_base::sync_with_stdio(false);` and `cin.tie(NULL);`. Using a newline `\n` instead of `endl` is also critical because `endl` forces a buffer flush, which is slow.
2. **Modulo Arithmetic**: For each input integer $a$, we check the condition `a % k == 0`. If true, we increment our counter.
3. **Streaming Input**: We don't need to store all $n$ numbers in an array. We can process them on the fly (one by one) to keep the memory usage minimal.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(n)$
  We iterate through the $n$ input elements exactly once, performing a constant-time $\mathcal{O}(1)$ modulo operation for each element.
- **Space Complexity**: $\mathcal{O}(1)$
  We only use a few variables (`n`, `k`, `count`, and `a`) to keep track of the count and current input. No arrays or additional data structures scaling with $n$ are required.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    if (!(cin >> n >> k)) return 0;

    long long count = 0;
    for (long long i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        if (a % k == 0) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
```