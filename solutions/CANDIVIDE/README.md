# [Candy Division (CANDIVIDE)](https://www.codechef.com/problems/CANDIVIDE)

- **Difficulty Rating**: 289
- **Solved in**: 1 attempt(s)

## Problem Summary
We are given an integer $N$, representing the total number of candies. We need to determine if it is possible to divide these candies equally among $3$ friends without leaving any remainder. If it is possible, we should output `YES`; otherwise, output `NO`.

## Intuition & Mathematical Observation
For a number of candies $N$ to be divided equally among $3$ friends, $N$ must be a multiple of $3$. In modular arithmetic terms, this means that the remainder of $N$ divided by $3$ must be $0$. 

Therefore, the condition simplifies to checking whether:
$$N \pmod 3 == 0$$

If this condition holds true, the answer is `YES`. Otherwise, it is `NO`.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case. We only perform a single modulo operation and a conditional check. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as we only use a few variables to store the input and test cases.

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
        int n;
        cin >> n;
        
        // The candies must be divisible equally among 3 friends
        if (n % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```