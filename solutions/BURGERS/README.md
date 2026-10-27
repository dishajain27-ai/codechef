# [Burgers (BURGERS)](https://www.codechef.com/problems/BURGERS)

- **Difficulty Rating**: 263
- **Solved in**: 2 attempt(s)

## Problem Summary
We are given $A$ patties and $B$ buns. To make one burger, we need exactly one patty and one bun. Our goal is to find the maximum number of burgers we can make using the available patties and buns.

## Intuition & Mathematical Observation
To make a single burger, we require one unit of $A$ (patties) and one unit of $B$ (buns). 
- If we have fewer patties than buns ($A < B$), we will run out of patties first, so we can only make $A$ burgers.
- If we have fewer buns than patties ($B < A$), we will run out of buns first, so we can only make $B$ burgers.
- If we have an equal number of both ($A = B$), we can make $A$ (or $B$) burgers.

Thus, the maximum number of burgers we can make is limited by the resource that is in smaller quantity. Mathematically, this is given by the minimum of $A$ and $B$, i.e., $\min(A, B)$.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case, as the solution only involves a single comparison (`min` operation). For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few integer variables are used.

## Solution Code

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int A, B;
    cin >> A >> B;
    cout << min(A, B) << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}
```