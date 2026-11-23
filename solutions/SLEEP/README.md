# [Sleep deprivation (SLEEP)](https://www.codechef.com/problems/SLEEP)

- **Difficulty Rating**: 348
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef considers a person to be **sleep deprived** if they have slept strictly less than $7$ hours in a day. Given the number of hours $X$ that Chef slept today, we need to determine whether Chef is sleep deprived or not. If he is sleep deprived, output `YES`; otherwise, output `NO`.

## Intuition & Mathematical Observation
The problem directly translates the condition for sleep deprivation into a simple comparison:
- If $X < 7$, Chef is sleep deprived $\rightarrow$ Output **`YES`**
- If $X \ge 7$, Chef is not sleep deprived $\rightarrow$ Output **`NO`**

Since the problem statement includes multiple test cases, we read the number of test cases $T$ and evaluate each query independently in constant time.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as only a single integer variable $X$ is used to store the input per testcase.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to determine if Chef is sleep deprived for a single test case
void solve_case() {
    int x;
    cin >> x;
    
    // A person is sleep deprived if they slept strictly less than 7 hours
    if (x < 7) {
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