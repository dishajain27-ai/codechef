# [Instagram (INSTAGRAM)](https://www.codechef.com/problems/INSTAGRAM)

- **Difficulty Rating**: 408
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem asks us to determine whether a given Instagram account is considered "spam". We are given two integers for each test case:
- $X$: The number of accounts the user is following.
- $Y$: The number of followers the user has.

According to the problem statement, an account is classified as spam if the number of accounts it follows strictly exceeds $10$ times the number of followers it has ($X > 10 \times Y$). For each test case, we need to output `YES` if the account is spam, and `NO` otherwise.

## Intuition & Mathematical Observation
The condition given in the problem translates directly into a mathematical inequality:
$$\text{Spam condition: } X > 10Y$$

Since multiple test cases are given, we can read $X$ and $Y$ for each test case, evaluate the inequality, and print the corresponding result. Using `long long` is a good practice to prevent any potential overflow, though the constraints for this difficulty level are typically small.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily executes well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a few variables to store the inputs $X$, $Y$, and the number of test cases $T$.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to determine if the account is spam
void solve_case() {
    long long x, y;
    cin >> x >> y;
    
    // An account is spam if following (X) > 10 * followers (Y)
    if (x > 10 * y) {
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