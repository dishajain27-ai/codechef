# [Chef Plays Ludo (LUDO)](https://www.codechef.com/problems/LUDO)

- **Difficulty Rating**: 260
- **Solved in**: 1 attempt(s)

## Problem Summary
In the game of Ludo, a player can only enter a new token onto the board if they roll a `6` on a standard 6-sided die. You are given the result of Chef's die roll, denoted by an integer $X$ ($1 \le X \le 6$). You need to determine whether Chef is able to enter a new token on this turn. Output `"YES"` if he can, and `"NO"` otherwise.

## Intuition & Mathematical Observation
The problem has a straightforward condition: Chef can enter a token if and only if the die roll $X$ is equal to $6$. 
- If $X = 6$, the condition is satisfied, so we output `YES`.
- If $X \neq 6$, the condition is not met, so we output `NO`.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a single comparison ($X == 6$), leading to an overall time complexity of $\mathcal{O}(T)$ for $T$ test cases.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as we only use a few integer variables to store the test cases and the die roll value.

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
        // Chef can enter a new token only if he rolls a 6
        if (x == 6) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```