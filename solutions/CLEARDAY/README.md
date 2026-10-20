# [Clear Day (CLEARDAY)](https://www.codechef.com/problems/CLEARDAY)

- **Difficulty Rating**: 233
- **Solved in**: 1 attempt(s)

## Problem Summary
In a given week, which consists of a total of $7$ days, we are given the number of rainy days ($X$) and cloudy days ($Y$). We need to find the number of **clear days** in that week, assuming that every day in the week is classified as either rainy, cloudy, or clear.

## Intuition & Mathematical Observation
The problem states that a week has $7$ days in total. The days are divided into three mutually exclusive categories:
1. Rainy days ($X$)
2. Cloudy days ($Y$)
3. Clear days (let's call this $C$)

Since the sum of all types of days must equal the total number of days in a week ($7$), we can set up the following equation:
$$X + Y + C = 7$$

To find the number of clear days ($C$), we simply rearrange the formula:
$$C = 7 - (X + Y)$$

## Complexity Analysis

- **Time Complexity**: $O(1)$ — The solution performs a constant number of arithmetic operations, running in instantaneous time.
- **Space Complexity**: $O(1)$ — Only a few integer variables are used to store the input and output, requiring a constant amount of extra memory.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y;
    if (cin >> x >> y) {
        // A week has 7 days in total
        int clear_days = 7 - (x + y);
        cout << clear_days << "\n";
    }
    
    return 0;
}
```