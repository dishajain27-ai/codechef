# [Increase IQ (INCRIQ)](https://www.codechef.com/problems/INCRIQ)

- **Difficulty Rating**: 478
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef wants to increase his IQ by watching educational videos. Each video he watches increases his IQ by $7$ points. Albert Einstein's IQ is known to be $170$. Given Chef's current IQ, $X$, we need to determine if Chef's IQ will strictly exceed $170$ after watching just **one** educational video (i.e., after a $+7$ point boost). Output `"Yes"` if it exceeds $170$, and `"No"` otherwise.

## Intuition & Mathematical Observation
The problem can be modeled as a simple conditional check. 
1. Chef's initial IQ is $X$.
2. After watching one video, his new IQ will be $X + 7$.
3. We need to check the condition: 
   $$X + 7 > 170$$
If this inequality holds true, print `Yes`; otherwise, print `No`.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ since the solution only involves a single arithmetic operation and a comparison.
- **Space Complexity**: $\mathcal{O}(1)$ as no extra memory is utilized beyond a single integer variable.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    if (cin >> x) {
        // Check if Chef's IQ strictly exceeds Einstein's (170) after +7 boost
        if (x + 7 > 170) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
```