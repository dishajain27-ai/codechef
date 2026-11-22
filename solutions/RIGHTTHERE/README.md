# [Right There (RIGHTTHERE)](https://www.codechef.com/problems/RIGHTTHERE)
- **Difficulty Rating**: 299
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Chef wants to host a party. The hall he has booked has a maximum capacity of $X$ people. However, $N$ people are planning to attend the party. 

Determine whether Chef can successfully host the party in the hall without exceeding its capacity. Output `"YES"` if the number of attendees is less than or equal to the hall's capacity ($N \le X$), and `"NO"` otherwise.

---

## Intuition & Mathematical Observation
The problem requires a direct comparison between two values:
1. $N$: The number of people attending the party.
2. $X$: The capacity of the hall.

For the party to fit inside the hall, the number of attendees cannot exceed the hall's capacity. Therefore, Chef can host the party if and only if:
$$N \le X$$

If this condition holds true, print `YES`; otherwise, print `NO`. Since there are multiple test cases, we process each query independently.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, resulting in $\mathcal{O}(T)$ total time complexity for $T$ test cases, where $T$ is the number of test cases. The basic comparison and I/O operations execute in constant time.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few variables (`N`, `X`, `t`) are used to store the input values, requiring constant extra space.

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
        long long n, x;
        cin >> n >> x;

        // Chef can host the party if the total number of people (N) 
        // does not exceed the hall capacity (X).
        if (n <= x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```