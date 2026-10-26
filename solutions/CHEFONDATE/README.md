# [Chef On Date (CHEFONDATE)](https://www.codechef.com/problems/CHEFONDATE)

- **Difficulty Rating**: 294
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef goes to a restaurant with his partner and receives a bill of $Y$ rupees. Chef has $X$ rupees with him. We need to determine whether Chef has enough money to pay the bill. If the amount of money he has is greater than or equal to the bill, output `"YES"`; otherwise, output `"NO"`.

---

## Intuition & Mathematical Observation
The problem can be solved with a direct comparison between the two given values:
- $X$: The amount of money Chef has.
- $Y$: The total bill amount.

For Chef to be able to successfully pay the bill, the money he possesses must be at least equal to the cost of the bill. Mathematically, this translates to the condition:
$$X \ge Y$$

If this condition holds true, Chef can pay the bill, and we print `"YES"`. Otherwise, he falls short, and we print `"NO"`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a single comparison and standard I/O operation. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily executes well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few integer variables ($X, Y, T$) are used.

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
        int x, y;
        cin >> x >> y;

        // Chef can pay if the money he has (X) is greater than or equal to the bill (Y)
        if (x >= y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```