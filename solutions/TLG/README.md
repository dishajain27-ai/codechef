# [The Lead Game (TLG)](https://www.codechef.com/problems/TLG)

- **Difficulty Rating**: 1190
- **Solved in**: 1 attempt(s)

---

## Problem Summary
In this game, two players (let's call them Player 1 and Player 2) play $n$ rounds. In each round, both players score some points. We are given the scores of both players for all rounds. 

The *lead* at any point is defined as the absolute difference between the total accumulated scores of the two players up to that round. The winner of the game is the player who achieves the maximum lead at the end of any round throughout the game. We need to output the winning player (1 or 2) and the maximum lead they achieved.

---

## Intuition & Mathematical Observation
1. **Cumulative Scores**: Instead of recalculating the total score from scratch at every round, we can maintain the running sums (`cumulative1` and `cumulative2`) of the scores for both players.
2. **Current Lead**: After each round $i$, the lead at that moment is $\lvert \text{cumulative1} - \text{cumulative2} \rvert$. The player with the higher cumulative score at that round is the current leader (Player 1 if $\text{cumulative1} > \text{cumulative2}$, otherwise Player 2).
3. **Tracking the Maximum**: We can keep track of the maximum lead seen so far (`max_lead`) and update it—along with the corresponding `winner`—whenever we encounter a strictly greater lead during our iteration over the rounds.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(n)$
  - We iterate through the $n$ rounds exactly once. Inside the loop, all operations (addition, absolute value calculation, comparisons) take $\mathcal{O}(1)$ time. Thus, the overall time complexity is linear with respect to the number of rounds.

- **Space Complexity**: $\mathcal{O}(1)$
  - We only store a few variables (`cumulative1`, `cumulative2`, `max_lead`, `winner`, etc.) to keep track of the running totals and the optimal answer. No arrays or extra data structures scaling with $n$ are needed, resulting in constant auxiliary space.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int cumulative1 = 0, cumulative2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; ++i) {
        int s, t;
        cin >> s >> t;
        
        cumulative1 += s;
        cumulative2 += t;

        int current_lead = abs(cumulative1 - cumulative2);
        int current_leader = (cumulative1 > cumulative2) ? 1 : 2;

        // Update the maximum lead found so far
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    cout << winner << " " << max_lead << "\n";

    return 0;
}
```