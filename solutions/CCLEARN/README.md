# [CodeChef Learn Problem Solving (CCLEARN)](https://www.codechef.com/problems/CCLEARN)

- **Difficulty Rating**: 287
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef wants to learn new programming languages. The platform offers **2 courses** for each programming language. Given that Chef wants to learn $N$ programming languages, we need to find the total number of courses he needs to take.

---

## Intuition & Mathematical Observation
Since each programming language provides exactly 2 courses, the total number of courses required to learn $N$ languages is simply twice the number of languages. 

We can model this with the basic arithmetic equation:
$$\text{Total Courses} = 2 \times N$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ as the solution only performs a single multiplication and I/O operation.
- **Space Complexity**: $\mathcal{O}(1)$ since it only requires a single integer variable to store the input.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // There are 2 courses for each language.
    // Given N languages, the total number of courses is 2 * N.
    int n;
    if (cin >> n) {
        cout << 2 * n << "\n";
    }

    return 0;
}
```