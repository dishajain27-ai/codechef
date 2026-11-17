# [Ageing (AGEING)](https://www.codechef.com/problems/AGEING)

- **Difficulty Rating**: 299
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef and Chefina have an age difference that remains constant over time. The problem states that currently, Chef is $20$ years old and Chefina is $10$ years old. Given Chef's future age $X$, we need to find Chefina's age at that time.

---

## Intuition & Mathematical Observation
Since the difference in their ages is always constant:
$$\text{Chef's Age} - \text{Chefina's Age} = 20 - 10 = 10 \text{ years}$$

Therefore, whenever Chef is $X$ years old, Chefina's age will always be:
$$\text{Chefina's Age} = X - 10$$

To make the solution robust and demonstrate optimization techniques, we can use fast I/O along with a hash map (`unordered_map`) to cache previously queried ages, avoiding redundant calculations if duplicate queries appear.

---

## Complexity Analysis

- **Time Complexity**: 
  - **Average Case**: $\mathcal{O}(1)$ per test case due to hash map lookups and insertions.
  - **Overall Time Complexity**: $\mathcal{O}(T)$ for $T$ test cases, which easily runs well within the time limit.
  
- **Space Complexity**: $\mathcal{O}(U)$, where $U$ is the number of unique values of $X$ stored in the cache. In the worst case, this is bounded by $\mathcal{O}(T)$.

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

    // Use a frequency map/cache style to store previously queried answers
    // Although a simple subtraction works, we use an unordered_map to demonstrate frequency caching.
    unordered_map<int, int> age_cache;

    while (t--) {
        int x;
        cin >> x;

        // Check if Chefina's age for Chef's age 'x' is already cached
        if (age_cache.find(x) == age_cache.end()) {
            // Chef is currently 20 and Chefina is 10, meaning Chefina is always 10 years younger.
            age_cache[x] = x - 10;
        }

        cout << age_cache[x] << "\n";
    }

    return 0;
}
```