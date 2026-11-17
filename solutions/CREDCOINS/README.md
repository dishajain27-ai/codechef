# [CRED Coins (CREDCOINS)](https://www.codechef.com/problems/CREDCOINS)

- **Difficulty Rating**: 539
- **Solved in**: 1 attempt(s)

## Problem Summary
In this problem, we earn $X$ CRED coins for every bill we pay. We complete this action $Y$ times, meaning we earn a total of $X \times Y$ CRED coins. Our goal is to find the maximum number of standard bags we can redeem, knowing that each bag costs $100$ CRED coins.

## Intuition & Mathematical Observation
1. **Total Coins Calculation**: First, calculate the total number of coins earned by multiplying the number of coins per bill ($X$) by the number of bills paid ($Y$).
   $$\text{Total Coins} = X \times Y$$
2. **Maximum Bags Calculation**: Since each bag costs 100 coins, the maximum number of bags we can get is found by taking the integer division of the total coins by 100.
   $$\text{Max Bags} = \left\lfloor \frac{X \times Y}{100} \right\rfloor$$
3. **Optimization / Caching**: To handle duplicate queries efficiently (if the same values of $X$ and $Y$ appear multiple times), we can use a frequency/memoization map (`std::map`) to store and retrieve previously computed results instantly.

## Complexity Analysis

- **Time Complexity**: 
  - For each test case, map lookups and insertions take logarithmic time $O(\log N)$, where $N$ is the number of unique queries stored. 
  - Overall time complexity per testcase is $O(\log \text{U})$, where $\text{U}$ is the number of unique queries, which is extremely fast and well within the time limits.
- **Space Complexity**: 
  - $O(\text{U})$ to store the unique query results inside the cache map, where $\text{U}$ is the number of distinct $(X, Y)$ pairs.

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
    
    // We can use a frequency map to cache results of identical queries if needed,
    // but a direct calculation is also very efficient. Here we incorporate a map 
    // to track coin earnings to demonstrate the frequency caching approach.
    map<pair<int, int>, int> bagCache;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        pair<int, int> query = {x, y};
        
        // Check if this query has already been processed and cached
        if (bagCache.find(query) != bagCache.end()) {
            cout << bagCache[query] << "\n";
            continue;
        }
        
        // Calculate total coins earned
        int totalCoins = x * y;
        
        // Each bag costs 100 CRED coins
        int maxBags = totalCoins / 100;
        
        // Cache the result
        bagCache[query] = maxBags;
        
        cout << maxBags << "\n";
    }
    
    return 0;
}
```