# [Second Largest (FLOW017)](https://www.codechef.com/problems/FLOW017)

- **Difficulty Rating**: 520
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Given three distinct integers $A$, $B$, and $C$, the objective is to find and output the second largest number among them. 

---

## Intuition & Mathematical Observation
Since we are only dealing with three numbers, a straightforward approach is to store the numbers in a collection (such as an array or a vector) and sort them in non-decreasing order. 
- After sorting three elements:
  - The first element (`nums[0]`) will be the smallest.
  - The second element (`nums[1]`) will be the **second largest**.
  - The third element (`nums[2]`) will be the largest.

Thus, sorting allows us to reliably retrieve the second largest element in $O(1)$ time after an $O(3 \log 3)$ (which is effectively $O(1)$) sorting step.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. Sorting a fixed array of size $3$ takes a constant number of operations. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily fits within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$. We only use a vector of size $3$ to store the numbers, requiring a constant amount of extra memory.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to solve an individual test case
void solve_case() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    // Put the three numbers in an array/vector and sort them
    vector<long long> nums = {a, b, c};
    sort(nums.begin(), nums.end());
    
    // The second largest will be the middle element after sorting
    cout << nums[1] << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}
```