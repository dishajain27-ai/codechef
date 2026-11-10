# [ATM Machine (ATM2)](https://www.codechef.com/problems/ATM2)
- **Difficulty Rating**: 1001
- **Solved in**: 2 attempt(s)

---

## Problem Summary
There is an ATM machine containing an initial amount of cash $K$. There are $N$ people standing in a queue, each wishing to withdraw a specific amount of money. The $i$-th person wants to withdraw $A_i$ amount. 

The people are processed sequentially from the 1st to the $N$-th person. For each person, if the ATM has enough cash (i.e., the current balance $K \ge A_i$), the ATM will dispense the requested amount, and $K$ will be reduced by $A_i$. If the ATM does not have enough cash, the request is denied, and that person leaves without money, while the ATM balance remains unchanged.

We need to output a binary string of length $N$ where the $i$-th character is `'1'` if the $i$-th person successfully withdrew their money, and `'0'` otherwise.

---

## Intuition & Mathematical Observation
The problem can be solved by directly simulating the process as described:
1. Maintain the current balance of the ATM in a variable $K$.
2. Iterate through each person's requested amount $A_i$ from $i = 0$ to $N-1$.
3. Check if the current balance $K$ is greater than or equal to $A_i$:
   - **If yes:** The transaction is successful. Subtract $A_i$ from $K$ and append `'1'` to our result.
   - **If no:** The transaction fails. Do not change $K$ and append `'0'` to our result.
4. Print the final binary string for each test case.

---

## Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$ per test case, where $N$ is the number of people. We iterate through the array of requests of size $N$ exactly once. Across $T$ test cases, the total time complexity is $\mathcal{O}(\sum N)$, which easily runs well within the time limit.
- **Space Complexity:** $\mathcal{O}(N)$ per test case to store the array of requests and the resulting binary string. Using `result.reserve(n)` further optimizes string allocation overhead.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    string result = "";
    // Reserve memory to avoid reallocations
    result.reserve(n);
    
    for (int i = 0; i < n; i++) {
        if (k >= a[i]) {
            k -= a[i];
            result += '1';
        } else {
            result += '0';
        }
    }
    
    cout << result << "\n";
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