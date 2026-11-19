# [Count the Notebooks (NOTEBOOK)](https://www.codechef.com/problems/NOTEBOOK)
- **Difficulty Rating**: 563
- **Solved in**: 1 attempt(s)

## Problem Summary
You are given $N$ kilograms of pulp. The problem states that:
- $1$ kilogram of pulp can be used to manufacture $1,000$ pages.
- $1$ notebook is made up of $100$ pages.

We need to calculate the total number of notebooks that can be made from $N$ kilograms of pulp.

---

## Intuition & Mathematical Observation
To find the total number of notebooks, we can break the conversion down step-by-step:
1. From $N$ kilograms of pulp, the total number of pages produced is $N \times 1,000$.
2. Since each notebook requires $100$ pages, the total number of notebooks is:
   $$\text{Notebooks} = \frac{N \times 1,000}{100} = N \times 10$$

Thus, for any given $N$ kilograms of pulp, the answer is simply $N$ multiplied by $10$.

---

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case, as the solution only involves a single multiplication. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ because we only use a few variables to store the input and output.

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
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        // 1 kg of pulp makes 1000 pages, and 1 notebook takes 100 pages.
        // Therefore, 1 kg of pulp makes (1000 / 100) = 10 notebooks.
        long long notebooks = n * 10;
        
        cout << notebooks << "\n";
    }

    return 0;
}
```