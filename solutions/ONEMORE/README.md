# [Just One More Episode (ONEMORE)](https://www.codechef.com/problems/ONEMORE)
- **Difficulty Rating**: 320
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef wants to watch one more episode of an anime before his exam. Each episode takes **24 minutes** to watch. Given that Chef has $X$ minutes left before his exam starts, determine whether he has enough time to watch the complete episode. He can only watch it if he has *strictly more* than 24 minutes remaining (or depending on the exact problem phrasing, let's check the condition: if $X > 24$, output `YES`; otherwise, output `NO`).

## Intuition & Mathematical Observation
The duration of a single episode is fixed at 24 minutes. 
- If Chef has $X$ minutes remaining, he needs to finish the 24-minute episode *before* the time runs out. 
- Therefore, the available time $X$ must be strictly greater than 24 for him to successfully finish the episode in time. 
- If $X > 24$, print `YES`; otherwise, print `NO`.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case, leading to an overall time complexity of $\mathcal{O}(T)$ for $T$ test cases, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few variables are used to store the input.

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
        int x;
        cin >> x;
        // Chef must finish watching the 24-minute episode strictly before the exam starts.
        // Therefore, available time X must be strictly greater than 24.
        if (x > 24) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```