# [Chef and Chocolates (CCHOCOLATES)](https://www.codechef.com/problems/CCHOCOLATES)

- **Difficulty Rating**: 405
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef has some number of 5-rupee coins and 10-rupee coins. Specifically, he has:
- $X$ coins of ₹5
- $Y$ coins of ₹10

Each chocolate costs $Z$ rupees. We need to find the maximum number of chocolates Chef can buy using all the money he has.

---

## Intuition & Mathematical Observation
To find out how many chocolates Chef can buy, we first need to calculate the total amount of money he possesses:
$$\text{Total Money} = (X \times 5) + (Y \times 10)$$

Once the total money is known, the maximum number of chocolates Chef can buy is determined by dividing the total money by the cost of a single chocolate ($Z$), using integer division:
$$\text{Max Chocolates} = \left\lfloor \frac{\text{Total Money}}{Z} \right\rfloor$$

In the provided solution, a `std::map` is used to store the coin counts and simulate the frequency mapping of coin values, which is then used to compute the total money.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(\log K)$ per test case (where $K$ is the number of distinct coin types stored in the map, which is constant here) or $\mathcal{O}(1)$ operations overall. Thus, for $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which comfortably passes within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as the map only stores a fixed number of key-value pairs.

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
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        // Calculate total money using a frequency mapping approach to coin values
        map<long long, long long> coin_counts;
        coin_counts[5] = x;
        coin_counts[10] = y;

        long long total_money = (coin_counts[5] * 5) + (coin_counts[10] * 10);

        // Maximum number of chocolates Chef can buy
        long long max_chocolates = total_money / z;

        cout << max_chocolates << "\n";
    }

    return 0;
}
```