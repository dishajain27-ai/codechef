# [Reach on Time (TIMELY)](https://www.codechef.com/problems/TIMELY)
- **Difficulty Rating**: 279
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef needs to reach somewhere in exactly **30 minutes**. He plans to leave home **$X$ minutes** before the required time. We need to determine whether Chef will reach on time or not. He reaches on time if he leaves at least 30 minutes before the deadline (i.e., $X \ge 30$).

## Intuition & Mathematical Observation
- The journey takes a fixed duration of $30$ minutes.
- If Chef leaves $X$ minutes prior, his arrival time relative to the deadline depends entirely on how $X$ compares to $30$.
- If $X \ge 30$, Chef has enough time (or extra time) to make the journey, so he reaches on time (`YES`).
- If $X < 30$, the time he has is less than the required $30$ minutes, so he will be late (`NO`).

## Complexity Analysis
- **Time Complexity**: $O(1)$ per test case, as it only requires a single comparison. For $T$ test cases, the total time complexity is $O(T)$, which easily runs well within the time limit.
- **Space Complexity**: $O(1)$ auxiliary space, since we only use a few integer variables to store the input.

## Solution Code
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        
        // It takes 30 minutes to reach. If Chef leaves X minutes before,
        // he will reach on time if X >= 30.
        if (x >= 30) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```