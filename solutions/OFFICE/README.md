# [Chef in his Office (OFFICE)](https://www.codechef.com/problems/OFFICE)

- **Difficulty Rating**: 532
- **Solved in**: 2 attempt(s)

## Problem Summary
Chef works for 5 days a week. For the first 4 days of the week, he works for $X$ hours each day. On the 5th day (the last day), he works for $Y$ hours. We need to calculate the total number of hours Chef works in a single week.

## Intuition & Mathematical Observation
The week is split into two parts based on daily working hours:
1. **First 4 days**: Each day has $X$ hours, contributing a total of $4 \times X$ hours.
2. **Last day (5th day)**: The day has $Y$ hours, contributing $1 \times Y$ hours.

To find the total working hours for the week, we simply sum the hours of all 5 days:
$$\text{Total Hours} = (4 \times X) + Y$$

Since the problem includes multiple test cases, we process each test case independently.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase. The solution uses a few basic arithmetic operations (multiplication and addition), which execute in constant time. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$. No extra memory is allocated dynamically; only a few integer variables are used.

## Solution Code

```cpp
#include <iostream>

using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    // 4 days of X hours each, and 1 day of Y hours
    int total_hours = (4 * x) + y;
    cout << total_hours << "\n";
}

int main() {
    // Optimize input/output operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
```