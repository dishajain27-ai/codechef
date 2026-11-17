# [2000 (RIP2000)](https://www.codechef.com/problems/RIP2000)

- **Difficulty Rating**: 284
- **Solved in**: 1 attempt(s)

## Problem Summary
You are given an amount of money represented entirely by $N$ notes of ₹2000. The objective is to find out how many ₹500 notes would be required to make the exact same total amount of money.

## Intuition & Mathematical Observation
Each ₹2000 note can be exchanged for four ₹500 notes because:
$$\frac{2000}{500} = 4$$

Therefore, if we have $N$ notes of ₹2000, the total equivalent number of ₹500 notes is simply $N \times 4$. 

Since $N$ can be large enough that multiplying by $4$ might exceed standard 32-bit integer limits in some edge cases (though typically small in basic problems, it's a good practice in competitive programming), we cast the result to a `long long`.

## Complexity Analysis
- **Time Complexity**: $O(1)$ — The solution performs a single arithmetic multiplication operation.
- **Space Complexity**: $O(1)$ — Only a few variables are used to store the input and output.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        // Each 2000 Rs note is equivalent to four 500 Rs notes (2000 / 500 = 4).
        long long total_500_notes = (long long)n * 4;
        cout << total_500_notes << "\n";
    }

    return 0;
}
```