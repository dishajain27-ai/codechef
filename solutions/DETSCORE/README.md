# [Determine the Score (DETSCORE)](https://www.codechef.com/problems/DETSCORE)

- **Difficulty Rating**: 267
- **Solved in**: 1 attempt(s)

---

## Problem Summary
You are holding a contest with a total of $10$ test cases, worth a total of $X$ points. Each test case carries an equal number of points. Given that a contestant successfully passes $N$ test cases ($0 \le N \le 10$), you need to find and output the total score obtained by the contestant.

---

## Intuition & Mathematical Observation
1. Since there are $10$ test cases in total and all of them carry an equal weight, the points awarded for each individual test case is given by $\frac{X}{10}$.
2. If a contestant passes $N$ test cases, their total score is simply $N$ times the points per test case.
3. Therefore, the formula for the total score is:
   $$\text{Total Score} = N \times \left(\frac{X}{10}\right)$$
4. While this can be computed directly in $O(1)$ time, the solution below demonstrates a mapping approach using a C++ `std::map` to map each test case index to its corresponding points, mirroring the problem's structure.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case (since the number of test cases in the problem is fixed at 10, the loops run a constant number of times). Overall time complexity for $T$ test cases is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ (the `std::map` stores at most $10$ elements, requiring a constant amount of extra memory).

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
        int x, n;
        cin >> x >> n;
        
        // Since there are 10 test cases, each test case is worth (x / 10) points.
        // We can also use a map to cache point values for each test case weight if needed,
        // but a direct calculation is most efficient. Let's use a frequency map approach
        // mapping test case index to points.
        
        map<int, int> point_map;
        int points_per_case = x / 10;
        
        for (int i = 1; i <= 10; i++) {
            point_map[i] = points_per_case;
        }
        
        int total_score = 0;
        for (int i = 1; i <= n; i++) {
            total_score += point_map[i];
        }
        
        cout << total_score << "\n";
    }

    return 0;
}
```