# [Parity (PAR2)](https://www.codechef.com/problems/PAR2)
- **Difficulty Rating**: 295
- **Solved in**: 3 attempt(s)

## Problem Summary
Chef has $N$ chocolates and wants to divide them equally between 2 friends without breaking any chocolate. We need to determine if it is possible to divide $N$ chocolates equally into two integer parts.

## Intuition & Mathematical Observation
For $N$ chocolates to be divided equally between two friends:
- Each friend must receive $\frac{N}{2}$ chocolates.
- Since chocolates cannot be broken, $\frac{N}{2}$ must be an integer.

This means $N$ must be an **even number** (i.e., $N \pmod 2 == 0$). 
- If $N$ is even, output `"Yes"`.
- If $N$ is odd, output `"No"`.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case. Modulo arithmetic and conditional checks execute in constant time. Thus, the overall time complexity for $T$ test cases is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, as only a single integer variable `n` is used for state storage.

## Solution Code

```cpp
#include <iostream>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    // If the number of chocolates is even, they can be divided equally.
    if (n % 2 == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}
```