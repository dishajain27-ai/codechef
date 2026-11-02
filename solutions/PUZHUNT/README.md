# [Puzzle Hunt (PUZHUNT)](https://www.codechef.com/problems/PUZHUNT)

- **Difficulty Rating**: 279
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem asks whether a team of size $N$ is eligible to participate in a puzzle hunt competition. According to the rules, a team must consist of **at least 6 and at most 8 members** (inclusive). We are given the integer $N$ and need to output `Yes` if the team size is valid, and `No` otherwise.

---

## Intuition & Mathematical Observation
The allowed team sizes form a contiguous range: $6, 7,$ and $8$. 
Therefore, a team size $N$ is valid if and only if the following condition is met:
$$6 \le N \le 8$$

In the provided solution, this condition is checked using a lookup structure (a map), but it can also be evaluated directly using standard comparison operators.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ 
  The solution performs a constant number of operations (inserting a few elements into a map and checking membership, or a simple range check), which takes $\mathcal{O}(1)$ time.
- **Space Complexity**: $\mathcal{O}(1)$ 
  Only a few variables and a small fixed-size map are used, requiring constant extra space.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        // Using a frequency map/counter approach to check team size eligibility
        map<int, bool> validSizes;
        for (int i = 6; i <= 8; i++) {
            validSizes[i] = true;
        }

        // Check if N is in the allowed team size range
        if (validSizes[n]) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
```