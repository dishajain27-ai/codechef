# [Chef And Operators (CHOPRT)](https://www.codechef.com/problems/CHOPRT)

- **Difficulty Rating**: 520
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Given two integers $A$ and $B$, we need to compare them and output the correct relational operator between them. Specifically:
- If $A$ is greater than $B$, output `>`
- If $A$ is less than $B$, output `<`
- If $A$ is equal to $B$, output `=`

There are $T$ independent test cases to process.

---

## Intuition & Mathematical Observation
This is a straightforward implementation problem that tests basic conditional branching (`if-else` statements) in C++. 

Since the values of $A$ and $B$ can potentially be large (though typically within standard integer limits, using `long long` is a safe practice to prevent any potential overflow issues), we simply read the input values for each testcase, apply standard comparison operators (`>`, `<`, `==`), and print the corresponding character.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase, as the comparison and output operations take constant time. For $T$ testcases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$, since we only use a few variables (`t`, `a`, `b`) to store the input and require no additional data structures.

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
        long long a, b;
        cin >> a >> b;

        // Compare A and B
        if (a > b) {
            cout << ">\n";
        } else if (a < b) {
            cout << "<\n";
        } else {
            cout << "=\n";
        }
    }

    return 0;
}
```