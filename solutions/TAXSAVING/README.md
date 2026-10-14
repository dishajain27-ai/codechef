# [Saving Taxes (TAXSAVING)](https://www.codechef.com/problems/TAXSAVING)

- **Difficulty Rating**: 252
- **Solved in**: 1 attempt(s)

## Problem Summary
In India, people need to pay tax on their income if it exceeds a certain threshold. In this problem, Chef earns $X$ rupees per year, and any income above $Y$ rupees is tax-free (meaning he only needs to pay taxes on the amount earned *above* $Y$, or alternatively, he can save taxes by investing up to the amount that brings his taxable income down, or simply put: Chef wants to know the maximum amount of money he has to pay tax on, which is the difference between his total earnings and the tax-free limit). 

Wait, looking specifically at the constraints and typical problem statement for *Saving Taxes*: Chef has to invest his money to save tax. Any income above $Y$ is taxable. Therefore, to save tax entirely on his earnings, the minimum amount he needs to invest (or the taxable amount he can save) is simply the total earnings minus the threshold limit, i.e., $X - Y$.

Given $T$ test cases, for each test case we are given $X$ (total income) and $Y$ (tax-free limit), and we need to find the amount on which Chef has to pay tax, which is $X - Y$.

---

## Intuition & Mathematical Observation
The problem is straightforward:
- Chef earns $X$.
- The maximum tax-free income limit is $Y$.
- The amount exceeding $Y$ is subject to tax (and thus the amount he needs to save/pay tax on). 
- Since $X > Y$ is guaranteed, the answer is directly obtained by subtracting the tax-free limit from the total earnings: 
  $$\text{Taxable Amount} = X - Y$$

To demonstrate robustness and handle potential repeated queries efficiently, the provided solution uses a caching technique (`std::map`) to store previously computed results, paired with Fast I/O for optimal performance.

---

## Complexity Analysis

- **Time Complexity**: 
  - For each of the $T$ test cases, checking and inserting into a `std::map<pair<int, int>, int>` takes $O(\log N)$ time, where $N$ is the number of unique queries cached. 
  - Overall Time Complexity: $\mathcal{O}(T \log K)$, where $K$ is the number of distinct query pairs. (An $\mathcal{O}(1)$ direct subtraction is also acceptable, but the map approach runs well within the time limits for small constraints).

- **Space Complexity**: 
  - $\mathcal{O}(K)$ auxiliary space to store the distinct query results in the map, where $K$ is the number of unique test case inputs cached.

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
    
    // Using a map to cache earnings and tax limits if needed, 
    // or simply solve using direct subtraction as requested by the approach theme.
    map<pair<int, int>, int> tax_cache;

    while (t--) {
        int x, y;
        cin >> x >> y;

        // Check cache (simulating frequency caching/lookup technique)
        if (tax_cache.find({x, y}) == tax_cache.end()) {
            tax_cache[{x, y}] = x - y;
        }

        cout << tax_cache[{x, y}] << "\n";
    }

    return 0;
}
```