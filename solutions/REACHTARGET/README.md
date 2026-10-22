# [Reach the Target (REACHTARGET)](https://www.codechef.com/problems/REACHTARGET)
- **Difficulty Rating**: 281
- **Solved in**: 2 attempt(s)

## Problem Summary
In this problem, there is a cricket match scenario where Team A has already scored $X$ runs. Team B needs to score a total of $X$ runs to tie the match, but currently, Team B has only scored $Y$ runs. We need to find out how many *more* runs Team B requires to reach the target of $X$ runs.

## Intuition & Mathematical Observation
The problem statement gives us two values for each test case:
- $X$: The target score to reach.
- $Y$: The current score of the team.

To find the remaining runs needed to reach the target, we simply need to subtract the current score ($Y$) from the target score ($X$). 

Thus, the formula is:
$$\text{Runs needed} = X - Y$$

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case. Since there are $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few variables are used to store the input and output.

## Solution Code

```cpp
#include <iostream>

using namespace std;

void solve() {
    int x, y;
    if (cin >> x >> y) {
        cout << x - y << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}
```