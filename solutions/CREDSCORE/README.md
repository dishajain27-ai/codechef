# [Credit score (CREDSCORE)](https://www.codechef.com/problems/CREDSCORE)
- **Difficulty Rating**: 459
- **Solved in**: 1 attempt(s)

## Problem Summary
To achieve a passing credit score for a particular benefit, an individual's credit score ($X$) must be greater than or equal to $750$. Given the integer $X$, our task is to determine whether the person meets this threshold. We need to output `YES` if $X \ge 750$, and `NO` otherwise.

## Intuition & Mathematical Observation
The problem requires a simple conditional check. Mathematically, we evaluate the condition:
$$\text{Result} = \begin{cases} \text{YES} & \text{if } X \ge 750 \\ \text{NO} & \text{if } X < 750 \end{cases}$$

While a basic `if-else` statement is sufficient, the provided solution demonstrates the logic by storing the evaluation state inside a frequency map (`std::map`), mapping decision strings (`YES`/`NO`) to their respective occurrence counts before printing the final result.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(\log K)$, where $K$ is the number of keys inserted into the map (in this case, $\mathcal{O}(1)$ operations since we insert at most one string into the `std::map`).
- **Space Complexity**: $\mathcal{O}(1)$, as the auxiliary storage used by the map and variables requires a constant amount of memory.

## Solution Code
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Read the credit score
    int x;
    cin >> x;

    // Use a frequency map / lookup approach as requested by the persona guidance
    map<string, int> statusMap;
    
    if (x >= 750) {
        statusMap["YES"]++;
    } else {
        statusMap["NO"]++;
    }

    // Output based on the map presence
    if (statusMap["YES"] > 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
```