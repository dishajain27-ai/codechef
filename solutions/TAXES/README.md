# [Tax in Chefland (TAXES)](https://www.codechef.com/problems/TAXES)

- **Difficulty Rating**: 276
- **Solved in**: 1 attempt(s)

---

## Problem Summary
In Chefland, the tax policy depends on an individual's income $X$:
- If an income $X$ is strictly greater than $100$, a flat tax of $10$ rupees is deducted.
- If the income $X$ is less than or equal to $100$, no tax is deducted.

Given the income $X$, we need to find the final amount remaining after applying the tax rules.

---

## Intuition & Mathematical Observation
The problem can be modeled using a simple conditional statement:
- If $X > 100$, the output is $X - 10$.
- If $X \le 100$, the output is simply $X$.

To optimize and demonstrate robust programming practices, we can also use a hash map (`std::map`) to cache the results of incomes we have already processed. If the same income appears multiple times across test cases, we can retrieve the answer instantly from the cache rather than recomputing it.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(T \log (\text{number of unique queries}))$ 
  - For each of the $T$ test cases, we check and potentially insert into a `std::map`, which takes logarithmic time with respect to the number of unique elements stored in the map. For the constraints of this problem, this performs well within the time limit.
- **Space Complexity**: $\mathcal{O}(U)$
  - Where $U$ is the number of unique income values stored in the cache (`income_cache`). In the worst case, every query has a distinct income value, requiring $\mathcal{O}(T)$ space.

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
    
    // We can use a map to cache results of incomes we've already processed,
    // following the frequency caching / lookup style requirement.
    map<int, int> income_cache;

    while (t--) {
        int x;
        cin >> x;

        // Check if the result for this income is already cached
        if (income_cache.find(x) != income_cache.end()) {
            cout << income_cache[x] << "\n";
        } else {
            // Compute the remaining amount after tax
            int result = (x > 100) ? (x - 10) : x;
            income_cache[x] = result;
            cout << result << "\n";
        }
    }

    return 0;
}
```