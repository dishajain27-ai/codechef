# [Pass or Fail (PASSORFAIL)](https://www.codechef.com/problems/PASSORFAIL)

- **Difficulty Rating**: 730
- **Solved in**: 1 attempt(s)

---

## Problem Summary

Chef is taking an examination that consists of a total of $N$ questions. 
- For each correct answer, Chef is awarded **$3$ marks**.
- For each incorrect (or unattempted) answer, Chef is penalized with **$1$ mark** ($-1$ mark).

Chef answers $X$ questions correctly. Consequently, the number of incorrect answers will be $(N - X)$. To pass the examination, Chef needs to score **at least $P$ marks**. 

Our task is to determine whether Chef **PASSES** or **FAILS** the examination.

---

## Intuition & Mathematical Observation

To decide whether Chef passes or fails, we simply need to calculate their total score based on the given parameters:
1. Marks gained from correct answers = $3 \times X$
2. Marks lost from incorrect answers = $1 \times (N - X)$

Total Score can be mathematically expressed as:
$$\text{Score} = (3 \times X) - (N - X)$$

After calculating the total score, we compare it with the passing threshold $P$:
- If $\text{Score} \ge P$, Chef passes, so we output `PASS`.
- Otherwise, Chef fails, so we output `FAIL`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We perform a constant number of basic arithmetic operations and comparisons. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily executes well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$. No extra space or data structures are used beyond a few scalar variables.

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
    cin >> t;
    while (t--) {
        int n, x, p;
        cin >> n >> x >> p;

        // Calculate score: 3 marks for correct (x), -1 for incorrect (n - x)
        int score = (x * 3) - (n - x);

        // Check if score meets or exceeds the passing criteria
        if (score >= p) {
            cout << "PASS\n";
        } else {
            cout << "FAIL\n";
        }
    }

    return 0;
}
```