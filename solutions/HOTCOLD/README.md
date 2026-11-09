# [Is it hot or cold (HOTCOLD)](https://www.codechef.com/problems/HOTCOLD)

- **Difficulty Rating**: 410
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem asks us to determine whether a given temperature $C$ is considered "HOT" or "COLD". 
- If the temperature is **strictly greater than 20**, the output should be `HOT`.
- If the temperature is **less than or equal to 20**, the output should be `COLD`.

We are given $T$ test cases, and for each test case, we need to output the corresponding result.

---

## Intuition & Mathematical Observation
This is a straightforward conditional logic problem. We are given a single integer $C$ representing the temperature for each test case. 
We simply need to apply a conditional check:
- Evaluate the condition `C > 10`? No, the threshold specified in the problem is `20`.
- Evaluate `C > 20`:
  - If true, print `HOT`.
  - If false, print `COLD`.

Since operations are independent for each of the $T$ test cases, we can process them in a loop.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, resulting in $\mathcal{O}(T)$ overall time complexity for $T$ test cases, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a few variables to store the number of test cases and the temperature value.

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
        int c;
        cin >> c;

        // Climate is HOT if temperature is strictly above 20, otherwise COLD
        if (c > 20) {
            cout << "HOT\n";
        } else {
            cout << "COLD\n";
        }
    }

    return 0;
}
```