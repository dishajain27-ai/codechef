# [Read Pages (READPAGES)](https://www.codechef.com/problems/READPAGES)
- **Difficulty Rating**: 343
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef needs to read a book consisting of $N$ pages. He can read at most $X$ pages in a single day, and he has $Y$ days in total to finish the book. We need to determine whether Chef can read all $N$ pages within the given $Y$ days, assuming he reads the maximum possible pages ($X$) every day. Output `"YES"` if it is possible, and `"NO"` otherwise.

## Intuition & Mathematical Observation
- In 1 day, Chef can read $X$ pages.
- In $Y$ days, the maximum number of pages Chef can read is $X \times Y$.
- To finish the book of $N$ pages, the total capacity of pages he can read must be greater than or equal to $N$.
- Therefore, the condition simplifies to checking whether:
  $$\text{total pages he can read} = X \times Y \ge N$$

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a few basic arithmetic and comparison operations. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily executes within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$. No extra space or data structures are used.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to check if Chef can read all pages
void solve_case() {
    int n, x, y;
    cin >> n >> x >> y;
    
    // Maximum pages Chef can read in y days
    if (x * y >= n) {
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