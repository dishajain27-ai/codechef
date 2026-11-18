# [Passes for Fair (FAIRPASS)](https://www.codechef.com/problems/FAIRPASS)

- **Difficulty Rating**: 342
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef wants to take his $N$ friends to a fair. To enter the fair, everyone needs a pass. This means Chef needs $N$ passes for his friends, plus $1$ additional pass for himself. 

Chef currently has $K$ passes. We need to determine if Chef has enough passes to allow himself and all of his friends to enter the fair. Output `"YES"` if he can enter, and `"NO"` otherwise.

## Intuition & Mathematical Observation
- Chef has $N$ friends, so he requires $N$ passes for them.
- Chef also needs a pass for himself, bringing the total number of passes required to $N + 1$.
- If the number of passes Chef has ($K$) is strictly greater than the total number of people ($N$), i.e., $K > N$, then he has at least $N + 1$ passes, making it possible for everyone to enter.
- Therefore, the condition for entry is simply $K > N$.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a few basic arithmetic comparisons. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily passes within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$. No extra space or data structures are used beyond a few scalar variables.

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
        int n, k;
        cin >> n >> k;
        
        // Chef needs N passes for his friends and 1 pass for himself.
        // Total passes needed = N + 1.
        // He can enter if he has at least N + 1 passes (K > N).
        if (k > n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```