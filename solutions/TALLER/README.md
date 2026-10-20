# [Who is taller! (TALLER)](https://www.codechef.com/problems/TALLER)

- **Difficulty Rating**: 281
- **Solved in**: 1 attempt(s)

## Problem Summary
We are given the heights of two persons, Alice ($X$) and Bob ($Y$), in centimeters. We need to determine who is taller between the two. The problem guarantees that Alice and Bob have distinct heights (i.e., $X \neq Y$). We need to output `'A'` if Alice is taller (if $X > Y$) or `'B'` if Bob is taller (if $X < Y$). The solution needs to handle multiple test cases.

## Intuition & Mathematical Observation
The problem directly translates to a simple comparison between two integers. 
- If $X > Y$, Alice's height is strictly greater than Bob's, so we print `A`.
- Otherwise ($X < Y$), Bob's height is strictly greater than Alice's, so we print `B`.

Since each test case is independent and requires a constant number of operations, we can solve this using a simple conditional statement inside a loop that iterates over all test cases.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a single comparison and output the result. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily fits within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as we only use a few integer variables to store the inputs $X$ and $Y$.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to solve an individual test case
void solve_case() {
    int x, y;
    cin >> x >> y;
    
    // Compare heights and output 'A' if Alice is taller, otherwise 'B'
    if (x > y) {
        cout << "A\n";
    } else {
        cout << "B\n";
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