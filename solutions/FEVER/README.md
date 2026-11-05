# [Fever (FEVER)](https://www.codechef.com/problems/FEVER)
- **Difficulty Rating**: 348
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef's body temperature is $X$ degrees Fahrenheit. A person is considered to have a fever if their body temperature is **strictly greater** than $98^\circ\text{F}$. Given $X$, determine whether Chef has a fever. Output `YES` if he has a fever, and `NO` otherwise.

## Intuition & Mathematical Observation
The problem requires checking a simple single condition:
$$\text{Fever} = \begin{cases} \text{YES} & \text{if } X > 98 \\ \text{NO} & \text{if } X \le 98 \end{cases}$$

For each testcase, we read the temperature $X$ and evaluate whether $X > 98$. 

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per testcase. Overall time complexity is $\mathcal{O}(T)$ for $T$ testcases.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space as we only store simple scalar variables.

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
        int x;
        cin >> x;

        // Use a frequency map just to demonstrate the requested theme playfully
        map<int, int> temp_counts;
        temp_counts[x]++;

        // Check if the temperature strictly greater than 98 exists in our map
        if (temp_counts.count(x) && x > 98) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```