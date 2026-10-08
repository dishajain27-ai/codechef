# [Good Turn (GDTURN)](https://www.codechef.com/problems/GDTURN)

- **Difficulty Rating**: 238
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef and Chefina are playing a game with dice. In each turn, Chef rolls a die to get a number $X$, and Chefina rolls a die to get a number $Y$. A turn is considered **"Good"** if the sum of the numbers rolled by both of them is strictly greater than $6$ (i.e., $X + Y > 6$). 

Given the results of $T$ independent turns, we need to determine for each turn whether it is a Good turn or not. Output `"YES"` if the sum is greater than $6$, otherwise output `"NO"`.

---

## Intuition & Mathematical Observation
The problem directly translates to a simple conditional check. For each test case, we are given two integers, $X$ and $Y$. 
1. We compute their sum: $S = X + Y$.
2. We compare $S$ with $6$:
   - If $S > 6$, the condition is satisfied, and we print `YES`.
   - If $S \le 6$, the condition is not satisfied, and we print `NO`.

Since multiple test cases are given, we use a loop to process each test case independently, utilizing fast I/O for optimal performance.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase, resulting in $\mathcal{O}(T)$ total time complexity for $T$ test cases, where $T$ is the number of turns. Each addition and comparison takes constant time.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few scalar variables are used to store the inputs.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to check if the turn is good
void solve_case() {
    int x, y;
    cin >> x >> y;
    
    // A turn is good if the sum of numbers is greater than 6
    if (x + y > 6) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
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