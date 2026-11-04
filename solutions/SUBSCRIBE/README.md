# [Get Subscription (SUBSCRIBE)](https://www.codechef.com/problems/SUBSCRIBE)

- **Difficulty Rating**: 315
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef wants to hold a meeting on a streaming platform. The platform allows free meetings only if their duration is **less than or equal to 30 minutes**. If the duration strictly exceeds 30 minutes, Chef needs to purchase a subscription. 

Given the duration of the meeting $X$ (in minutes) for multiple test cases, we need to output `"YES"` if Chef needs a subscription, and `"NO"` otherwise.

---

## Intuition & Mathematical Observation
The problem has a straightforward condition:
- A subscription is required if and only if the meeting duration $X > 30$.
- If $X \le 30$, no subscription is needed.

Thus, for each test case, we simply read the integer $X$ and compare it against 30.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase, as it only involves a single comparison. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily fits within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$, since we only use a constant amount of extra memory for input variables.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to determine if a subscription is needed for duration X
void solve_case() {
    int x;
    cin >> x;
    
    // If the meeting duration is strictly greater than 30 minutes, 
    // Chef needs a subscription.
    if (x > 30) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Optimize standard I/O operations for competitive programming
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