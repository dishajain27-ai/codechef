# [Subscriptions (SUBSCRIBE_)](https://www.codechef.com/problems/SUBSCRIBE_)

- **Difficulty Rating**: 504
- **Solved in**: 1 attempt(s)

## Problem Summary
A group of $N$ friends wants to watch a show on Chef's streaming platform. A single subscription can serve at most $6$ people, and each subscription costs $X$ rupees. The goal is to find the minimum total cost required so that all $N$ friends can watch the show.

## Intuition & Mathematical Observation
1. **Subscription Requirement**: Since each subscription covers up to $6$ people, if $N$ people want to watch, we need $\lceil \frac{N}{6} \rceil$ subscriptions.
2. **Ceiling Division**: In integer arithmetic, we can compute the ceiling of $\frac{N}{6}$ without using floating-point numbers by using the formula:
   $$\text{Subscriptions} = \frac{N + 5}{6}$$
   This safely rounds up any fractional requirement to the next whole integer.
3. **Total Cost**: Once the number of subscriptions is determined, we multiply it by the cost of a single subscription ($X$). Using `long long` for the final cost prevents any potential integer overflow, though for the given constraints standard integers might suffice.

## Complexity Analysis
- **Time Complexity**: $O(1)$ per test case, as the solution uses a constant number of arithmetic operations. For $T$ test cases, the total time complexity is $O(T)$.
- **Space Complexity**: $O(1)$ auxiliary space, as only a few variables are used to store the inputs and results.

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
        int n, x;
        cin >> n >> x;

        // Calculate the number of subscriptions needed. 
        // Each subscription can cover up to 6 people. 
        // Using integer division with rounding up: (n + 5) / 6
        int subscriptions = (n + 5) / 6;

        // Total cost is the number of subscriptions multiplied by the cost per subscription
        long long total_cost = (long long)subscriptions * x;

        cout << total_cost << "\n";
    }

    return 0;
}
```