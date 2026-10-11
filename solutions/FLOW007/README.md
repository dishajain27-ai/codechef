# [Reverse The Number (FLOW007)](https://www.codechef.com/problems/FLOW007)
- **Difficulty Rating**: 588
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem requires us to take an integer $N$ as input and output its reverse. For example, if the input is `12345`, the output should be `54321`. Trailing zeros in the original number (which become leading zeros in the reversed number) should be omitted automatically (e.g., reversing `1200` should yield `21`, not `0021`).

## Intuition & Mathematical Observation
To reverse an integer mathematically, we can repeatedly extract the last digit of the number and build the reversed number:
1. Extract the last digit of $N$ using the modulo operator (`n % 10`).
2. Append this digit to our `reversed_n` variable by multiplying the current `reversed_n` by 10 and adding the digit (`reversed_n = reversed_n * 10 + digit`).
3. Remove the last digit from $N$ using integer division (`n /= 10`).
4. Repeat this process while $N > 0$.

Because standard integer types in C++ automatically drop leading zeros (e.g., `021` is stored and printed simply as `21`), we don't need any special handling for trailing zeros in the input.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(\log_{10} N)$ per test case, where $N$ is the given number. The number of iterations is proportional to the number of digits in $N$.
- **Space Complexity**: $\mathcal{O}(1)$ as we only use a few variables to store the input and the reversed number.

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

        int reversed_n = 0;
        while (n > 0) {
            int digit = n % 10;
            reversed_n = reversed_n * 10 + digit;
            n /= 10;
        }

        cout << reversed_n << "\n";
    }

    return 0;
}
```