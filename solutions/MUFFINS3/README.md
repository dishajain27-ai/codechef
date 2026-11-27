# [Packaging Chef's Cupcakes (MUFFINS3)](https://www.codechef.com/problems/MUFFINS3)

- **Difficulty Rating**: 1023
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef has produced $N$ cupcakes and wants to pack them into identical smaller boxes of size $A$ (where $A$ is the number of cupcakes in each box). After filling as many boxes as possible, Chef will be left with some remainder of cupcakes that didn't fit evenly into the boxes. 

Our task is to find the package size $A$ ($1 \le A \le N$) that **maximizes** this remainder. If there are multiple package sizes that yield the maximum remainder, we need to output any one of them (as it turns out, the optimal answer for a given $N$ is unique).

---

## Intuition & Mathematical Observation

Let $N$ be the total number of cupcakes and $A$ be the size of each package. The number of leftover cupcakes (the remainder) when dividing $N$ by $A$ is given by the modulo operator:
$$\text{Remainder} = N \pmod A$$

We want to find $A$ (where $1 \le A \le N$) such that $N \pmod A$ is maximized.

Let's test small values of $N$:
- **$N = 2$**:
  - $A = 1 \implies 2 \pmod 1 = 0$
  - $A = 2 \implies 2 \pmod 2 = 0$
  - *Max remainder occurs at $A = 2$*. Formula $\frac{N}{2} + 1 = \frac{2}{2} + 1 = 2$.

- **$N = 5$**:
  - $A = 1 \implies 5 \pmod 1 = 0$
  - $A = 2 \implies 5 \pmod 2 = 1$
  - $A = 3 \implies 5 \pmod 3 = 2$
  - $A = 4 \implies 5 \pmod 4 = 1$
  - $A = 5 \implies 5 \pmod 5 = 0$
  - *Max remainder occurs at $A = 3$*. Formula $\frac{5}{2} + 1 = 2 + 1 = 3$.

- **$N = 6$**:
  - $A = 1 \dots 6$ gives remainders for $A=4 \implies 6 \pmod 4 = 2$, $A=3 \implies 6 \pmod 3 = 0$, etc.
  - Specifically, for $A = 4$, $6 \pmod 4 = 2$.
  - For $A = \frac{6}{2} + 1 = 4$, $6 \pmod 4 = 2$.

**General Rule:**
To maximize the remainder when dividing $N$ by $A$, the optimal choice for the package size is always:
$$A = \left\lfloor \frac{N}{2} \right\rfloor + 1$$

- If $A = \frac{N}{2} + 1$, then $N = 2 \cdot A + (N - 2)$, which means $N \pmod A = N - 2$ (for $N > 2$).
- No package size greater than $\frac{N}{2}$ (other than $N$ itself) can yield a larger remainder. Specifically, choosing $A = \frac{N}{2} + 1$ leaves nearly half of the cupcakes as a remainder, which is the maximum possible.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. Since there are $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily executes well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a few variables for input and computation.

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
        long long n;
        cin >> n;
        // To maximize the remainder when dividing N by A, 
        // the optimal choice for package size A is (N / 2) + 1.
        cout << (n / 2) + 1 << "\n";
    }

    return 0;
}
```