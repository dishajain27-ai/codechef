# [Chess Time (CHESSTIME)](https://www.codechef.com/problems/CHESSTIME)

- **Difficulty Rating**: 337
- **Solved in**: 2 attempt(s)

---

## Problem Summary
You are given the total number of hours, $N$, that Chef has available to play chess. Each chess match takes exactly $20$ minutes to complete. The objective is to calculate the maximum number of chess matches Chef can play within the given $N$ hours.

---

## Intuition & Mathematical Observation
To find the maximum number of games Chef can play:
1. Convert the total available time from hours to minutes. Since there are $60$ minutes in an hour, $N$ hours are equal to $N \times 60$ minutes.
2. Each game takes $20$ minutes. Therefore, the total number of games is given by:
   $$\text{Max Games} = \frac{N \times 60}{20}$$
3. Simplifying the fraction $\frac{60}{20}$, we get $3$. Thus, the formula simplifies to:
   $$\text{Max Games} = N \times 3$$

For each test case, we simply multiply the input $N$ by $3$ to get the answer.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, as the solution only requires a single multiplication operation. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$, because we only use a few integer variables to store the inputs and outputs, requiring constant extra space.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        // Convert hours to minutes (n * 60) and divide by the time per game (20 minutes)
        // (n * 60) / 20 simplifies to n * 3
        int max_games = n * 3;
        cout << max_games << "\n";
    }

    return 0;
}
```