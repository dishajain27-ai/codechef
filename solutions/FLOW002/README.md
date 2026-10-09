# [Find Remainder (FLOW002)](https://www.codechef.com/problems/FLOW002)

- **Difficulty Rating**: 421
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Given two integers $A$ and $B$, we need to find the remainder when $A$ is divided by $B$ (i.e., $A \pmod B$). The problem specifies that there are multiple test cases, so we need to process each query efficiently.

---

## Intuition & Mathematical Observation
The problem directly translates to the modulo operation supported by almost all programming languages. In C++, the modulo operator `%` computes the remainder of the division of two integers. 

Given the constraints typically found in such basic problems, we should use `long long` data types to prevent any potential overflow issues during input reading, although standard integer types usually suffice for this rating level. To handle multiple test cases efficiently, fast I/O practices (`ios_base::sync_with_stdio(false); cin.tie(NULL);`) are implemented.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase. The modulo operation executes in constant time. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few variables are used to store the inputs.

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
        long long a, b;
        cin >> a >> b;
        // Output the remainder of A divided by B
        cout << (a % b) << "\n";
    }

    return 0;
}
```