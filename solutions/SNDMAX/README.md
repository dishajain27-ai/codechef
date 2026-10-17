# [Second Max of Three Numbers (SNDMAX)](https://www.codechef.com/problems/SNDMAX)

- **Difficulty Rating**: 300
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Given $N$ test cases, each consisting of three distinct integers $A$, $B$, and $C$, the objective is to find and output the second-largest (middle) number among the three for each test case.

---

## Intuition & Mathematical Observation
When dealing with three distinct numbers, the second maximum is the value that is neither the absolute maximum nor the absolute minimum. 
We can identify this by checking the relative sizes of the numbers:
1. If $A$ is strictly greater than one of the other numbers and strictly smaller than the other, then $A$ is the second maximum.
2. Similarly, if $B$ falls strictly between the other two numbers, $B$ is the second maximum.
3. Otherwise, by elimination, $C$ must be the second maximum.

Alternatively, this can also be achieved simply by storing the three numbers in an array or vector, sorting them, and picking the element at the middle index. However, the conditional checking approach runs in $O(1)$ constant time without any auxiliary data structures.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase. The comparisons involve a constant number of operations. For $N$ test cases, the total time complexity is $\mathcal{O}(N)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$. Only a few integer variables are used to store the input, requiring constant extra space.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Find and print the second maximum of the three numbers
        if ((a > b && a < c) || (a < b && a > c)) {
            cout << a << "\n";
        } else if ((b > a && b < c) || (b < a && b > c)) {
            cout << b << "\n";
        } else {
            cout << c << "\n";
        }
    }

    return 0;
}
```