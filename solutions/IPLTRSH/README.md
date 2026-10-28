# [IPL Ticket Rush (IPLTRSH)](https://www.codechef.com/problems/IPLTRSH)

- **Difficulty Rating**: 273
- **Solved in**: 1 attempt(s)

---

## Problem Summary
There are $N$ students who want to attend an IPL match, and there are $M$ tickets available. We need to find out how many students will **not** be able to get a ticket. If there are enough tickets for everyone (i.e., $M \ge N$), then $0$ students will miss out.

---

## Intuition & Mathematical Observation
This is a straightforward arithmetic problem:
1. If the number of students ($N$) is greater than the number of tickets ($M$), then the excess students ($N - M$) will be left without a ticket.
2. If the number of students ($N$) is less than or equal to the number of tickets ($M$), every student who wants a ticket gets one, meaning $0$ students are left out.

We can express this simply using a conditional check:
$$\text{Students left out} = \max(0, N - M)$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, as it only involves basic arithmetic operations and comparisons. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ since we only use a few integer variables to store the inputs.

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
        int n, m;
        cin >> n >> m;
        
        // If students are more than tickets, the rest miss out. 
        // Otherwise, everyone gets a ticket (0 left out).
        if (n > m) {
            cout << n - m << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    
    return 0;
}
```