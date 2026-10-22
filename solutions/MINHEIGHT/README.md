# [Roller Coaster (MINHEIGHT)](https://www.codechef.com/problems/MINHEIGHT)

- **Difficulty Rating**: 285
- **Solved in**: 2 attempt(s)

## Problem Summary
Chef wants to go on a roller coaster ride. However, there is a strict height restriction: a person must be **at least** $H$ centimeters tall to be allowed on the ride. Chef's current height is $X$ centimeters. 

We need to determine whether Chef is tall enough to ride the roller coaster. If Chef's height $X$ is greater than or equal to $H$, output `YES`; otherwise, output `NO`.

## Intuition & Mathematical Observation
The problem can be directly translated into a simple conditional comparison:
- Chef can ride if $X \ge H$.
- Chef cannot ride if $X < H$.

Since the problem includes multiple test cases, we read the number of test cases $T$, and for each test case, we compare $X$ and $H$ using a standard `if-else` statement.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase, since the solution only involves basic arithmetic comparisons and I/O operations. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few integer variables ($X, H, T$) are used.

## Solution Code

```cpp
#include <iostream>

using namespace std;

void solve() {
    int x, h;
    cin >> x >> h;
    if (x >= h) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
```