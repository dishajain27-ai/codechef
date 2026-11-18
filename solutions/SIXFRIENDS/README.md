# [Six Friends (SIXFRIENDS)](https://www.codechef.com/problems/SIXFRIENDS)

- **Difficulty Rating**: 382
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Six friends are going to stay at a hotel. They have two types of room options available:
1. **Double Rooms**: Each room can accommodate $2$ people, and the cost of one double room is $X$ rupees. Since there are $6$ friends, they would need $3$ double rooms.
2. **Triple Rooms**: Each room can accommodate $3$ people, and the cost of one triple room is $Y$ rupees. Since there are $6$ friends, they would need $2$ triple rooms.

The task is to find the **minimum total cost** to accommodate all six friends.

---

## Intuition & Mathematical Observation
To house $6$ people:
- If they choose **double rooms**, they need $3$ rooms because $3 \times 2 = 6$. The total cost will be $3 \times X$.
- If they choose **triple rooms**, they need $2$ rooms because $2 \times 3 = 6$. The total cost will be $2 \times Y$.

To minimize the expense, we simply need to compare the two total costs and choose the smaller one:
$$\text{Minimum Cost} = \min(3 \times X, 2 \times Y)$$

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. We perform a constant number of arithmetic operations and comparisons. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few integer variables are used to store the input and calculations.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Cost for 3 double rooms
        int cost_double = 3 * x;
        // Cost for 2 triple rooms
        int cost_triple = 2 * y;

        // Find and print the minimum of the two accommodation options
        cout << min(cost_double, cost_triple) << "\n";
    }

    return 0;
}
```