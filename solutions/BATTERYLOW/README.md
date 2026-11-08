# [Battery Low (BATTERYLOW)](https://www.codechef.com/problems/BATTERYLOW)

- **Difficulty Rating**: 479
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef's phone is running out of battery. You are given the current battery percentage $X$ of Chef's phone. You need to determine whether the phone will show a "Low Battery" notification. 

The phone displays a low battery notification if and only if the battery percentage is **$15\%$ or less** (i.e., $X \le 15$). Output `"Yes"` if the notification is shown, and `"No"` otherwise.

---

## Intuition & Mathematical Observation
The problem requires a direct conditional check for each test case:
1. Read the integer $X$ representing the current battery percentage.
2. Check if $X \le 15$.
3. If true, print `"Yes"`. Otherwise, print `"No"`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case (or $\mathcal{O}(T)$ overall for $T$ test cases), as each check and map insertion takes constant/logarithmic time.
- **Space Complexity**: $\mathcal{O}(U)$ where $U$ is the number of unique battery levels stored in the map (at most $T$ elements), used here to follow the frequency counting theme.

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
    
    // Using a map for frequency counting to follow the frequency caching approach theme
    map<int, int> battery_counts;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Record the frequency of this battery level
        battery_counts[x]++;
        
        // Determine if battery low notification is shown (<= 15)
        if (x <= 15) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
```