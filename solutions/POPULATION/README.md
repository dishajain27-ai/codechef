# [Final Population (POPULATION)](https://www.codechef.com/problems/POPULATION)
- **Difficulty Rating**: 358
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem asks us to determine the final population of a town after a specific set of demographic changes. We are given:
- $X$: The initial population of the town.
- $Y$: The number of people who left the town.
- $Z$: The number of people who immigrated into the town.

We need to output the final population of the town after accounting for these departures and arrivals.

## Intuition & Mathematical Observation
The final population can be found using straightforward arithmetic. Starting with the initial population ($X$), we subtract the people who left ($Y$) and add the people who immigrated ($Z$). 

The formula is:
$$\text{Final Population} = X - Y + Z$$

Since the values of $X, Y,$ and $Z$ can fit within standard integer limits, a basic linear calculation is sufficient. Using `long long` in C++ ensures we avoid any potential overflow issues, though the constraints typically fit standard integer types.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case. The solution performs a constant number of arithmetic operations. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a few variables are used to store the input and result.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the final population for a single test case
void solve_case() {
    long long x, y, z;
    cin >> x >> y >> z;
    
    // Final population = Initial - Left + Immigrated
    long long final_population = x - y + z;
    
    cout << final_population << "\n";
}

int main() {
    // Optimize standard input/output streams for speed
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