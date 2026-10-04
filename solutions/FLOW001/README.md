# [Add Two Numbers (FLOW001)](https://www.codechef.com/problems/FLOW001)

- **Difficulty Rating**: 242
- **Solved in**: 1 attempt(s)

---

## Problem Summary
The problem requires us to write a program that reads the number of test cases $T$. For each test case, we are given two integers, $A$ and $B$, and we need to output their sum ($A + B$).

---

## Intuition & Mathematical Observation
This is a foundational problem designed for beginners to get familiar with reading input and printing output in competitive programming. 

1. **Input Handling**: First, read the number of test cases $T$. Then, use a loop to process each of the $T$ test cases by reading two numbers, $A$ and $B$.
2. **Operation**: Compute the arithmetic sum $A + B$ for each pair.
3. **Optimization**: While a simple addition is sufficient, using fast I/O (`ios_base::sync_with_stdio(false); cin.tie(NULL);`) ensures that the solution runs efficiently even if the number of test cases is large. Additionally, we can use a cache (`std::map`) to store previously computed sums to avoid redundant calculations, demonstrating clean and structured programming.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(T \log K)$, where $T$ is the number of test cases and $K$ is the number of unique pairs stored in the `std::map`. The logarithmic factor comes from the lookup and insertion operations in the balanced binary search tree (`std::map`).
- **Space Complexity**: $\mathcal{O}(K)$, where $K$ is the number of unique pairs stored in the `std::map` cache to memoize the results.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    // Use a frequency map just to demonstrate caching and memoization,
    // though simple addition doesn't strictly need it.
    map<pair<long long, long long>, long long> sum_cache;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        // Check cache to add numbers efficiently
        auto key = make_pair(a, b);
        if (sum_cache.find(key) == sum_cache.end()) {
            sum_cache[key] = a + b;
        }

        cout << sum_cache[key] << "\n";
    }

    return 0;
}
```