# [Is the Score Consistent (TRUESCORE)](https://www.codechef.com/problems/TRUESCORE)
- **Difficulty Rating**: 572
- **Solved in**: 1 attempt(s)

## Problem Summary
Given the initial score of a football match as $A : B$ (Team 1 : Team 2) and a target score as $C : D$, determine whether it is possible for the match to end with the target score. In football, a team's score can only increase (or remain unchanged), but it can never decrease.

## Intuition & Mathematical Observation
In a standard game, goals are strictly additive. This means that a team's score monotonically increases over time. 

For the initial score $(A, B)$ to transition into the target score $(C, D)$:
1. Team 1's new score $C$ must be at least its current score $A$ ($C \ge A$).
2. Team 2's new score $D$ must be at least its current score $B$ ($D \ge B$).

If both conditions $C \ge A$ and $D \ge B$ are satisfied, the score transition is **POSSIBLE** (by Team 1 scoring $C - A$ goals and Team 2 scoring $D - B$ goals). Otherwise, it is **IMPOSSIBLE**.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case. Since there are $T$ test cases, the overall time complexity is $\mathcal{O}(T)$, which easily runs within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few primitive variables are used to store the scores.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to determine if the target score is achievable
bool is_possible(int a, int b, int c, int d) {
    // Team 1 and Team 2 can only increase their scores (goals cannot be subtracted)
    return (c >= a) && (d >= b);
}

void solve_case() {
    int a, b;
    cin >> a >> b;
    int c, d;
    cin >> c >> d;
    
    if (is_possible(a, b, c, d)) {
        cout << "POSSIBLE\n";
    } else {
        cout << "IMPOSSIBLE\n";
    }
}

int main() {
    // Optimize standard I/O operations for performance
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