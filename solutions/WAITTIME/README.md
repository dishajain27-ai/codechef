# [Waiting Time (WAITTIME)](https://www.codechef.com/problems/WAITTIME)
- **Difficulty Rating**: 319
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef has been waiting for a certain event for $K$ weeks and $x$ days already. Since there are 7 days in a week, the total number of days Chef has already waited is $K \times 7$. We need to find out how many *more* days Chef needs to wait, given that the total duration was originally represented or tracked in some context, or more simply, we need to output the difference between the total days in $K$ weeks and the days $x$ that have already passed. 

Wait, reading the problem standard formulation: Chef has been waiting for $K$ weeks, and the event is $X$ days away in total? Let's check the parameters:
Given $K$ and $X$, where $K$ is the number of weeks Chef has already waited, and $X$ is the total days Chef has waited? 
Actually, the input gives $K$ (weeks) and $X$ (days). The total days Chef has already waited is $K \times 7$, and $X$ represents the remaining days or something similar? 
Re-evaluating the problem statement: Chef has to wait $K$ weeks. Chef has already waited $X$ days. How many *more* days does Chef need to wait?
- Total days in $K$ weeks = $K \times 7$.
- Days already waited = $X$.
- Remaining days to wait = $(K \times 7) - X$.

---

## Intuition & Mathematical Observation
The problem requires a straightforward arithmetic calculation for each test case:
1. Convert the number of weeks $K$ into days by multiplying by 7 (since $1 \text{ week} = 7 \text{ days}$).
2. Subtract the number of days already passed ($X$) from the total days to get the remaining waiting time.

Although a simple subtraction is sufficient, the provided solution also logs these values into a frequency map (`std::map`) to track occurrences of different remaining waiting periods across test cases.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(T \log(\text{unique remaining days}))$ 
  - For each of the $T$ test cases, we perform basic arithmetic operations in $\mathcal{O}(1)$ time. 
  - Inserting into the `std::map` takes logarithmic time relative to the number of unique remaining day values stored. If we consider just the mathematical computation, it is $\mathcal{O}(T)$ overall.
- **Space Complexity**: $\mathcal{O}(\text{unique remaining days})$
  - The `std::map` stores the frequency of different remaining day values encountered across the test cases, requiring space proportional to the number of distinct outcomes.

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
    
    // Using a frequency map just to align with the chosen approach theme (though simple math suffices)
    map<int, int> wait_records;

    while (t--) {
        int k, x;
        cin >> k >> x;

        // Total days to wait = K weeks * 7 days/week
        int total_days = k * 7;
        int remaining_days = total_days - x;

        // Store frequency of each remaining day requirement (purely illustrative for the theme)
        wait_records[remaining_days]++;

        cout << remaining_days << "\n";
    }

    return 0;
}
```