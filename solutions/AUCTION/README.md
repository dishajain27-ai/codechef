# [Bidding (AUCTION)](https://www.codechef.com/problems/AUCTION)

- **Difficulty Rating**: 330
- **Solved in**: 1 attempt(s)

## Problem Summary
Three participants—Alice, Bob, and Charlie—place bids in an auction represented by three integers $A$, $B$, and $C$, respectively. We need to determine who placed the strictly highest bid among the three and output their name ("Alice", "Bob", or "Charlie"). It is guaranteed that all three bids are distinct.

## Intuition & Mathematical Observation
The problem requires a straightforward comparison of three numbers. Since the problem guarantees that all bids are unique, there will always be a single distinct maximum value. 
- If $A$ is greater than both $B$ and $C$, Alice wins.
- If $B$ is greater than both $A$ and $C$, Bob wins.
- Otherwise, Charlie wins.

Using conditional statements (`if-else`), we can directly compare the values and print the corresponding winner for each test case.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase, since it only involves a few constant-time comparison operations. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a few integer variables to store the bids.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        // Find who has the maximum bid
        if (a > b && a > c) {
            cout << "Alice\n";
        } else if (b > a && b > c) {
            cout << "Bob\n";
        } else {
            cout << "Charlie\n";
        }
    }
    
    return 0;
}
```