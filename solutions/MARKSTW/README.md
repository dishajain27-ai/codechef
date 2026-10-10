# [Alice and Marks (MARKSTW)](https://www.codechef.com/problems/MARKSTW)

- **Difficulty Rating**: 362
- **Solved in**: 1 attempt(s)

## Problem Summary
Alice scored $X$ marks, and Bob scored $Y$ marks in an examination. Alice is considered to be happy if her score is at least twice the score of Bob. We need to determine whether Alice is happy or not, and output `"Yes"` if she is, or `"No"` otherwise.

## Intuition & Mathematical Observation
The problem states the condition for Alice's happiness directly: her score $X$ must be greater than or equal to $2 \times Y$ (twice Bob's score). 

Mathematically, Alice is happy if and only if:
$$X \ge 2Y$$

We can simply read the values of $X$ and $Y$, evaluate this conditional expression, and print the corresponding output.

## Complexity Analysis

- **Time Complexity**: $O(1)$ — The solution performs a constant number of arithmetic and logical operations.
- **Space Complexity**: $O(1)$ — Only a few integer variables are used to store the inputs $X$ and $Y$.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y;
    if (cin >> x >> y) {
        // Alice is happy if her score (X) is at least twice Bob's score (Y)
        if (x >= 2 * y) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}
```