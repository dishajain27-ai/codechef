# [First and Last Digit (FLOW004)](https://www.codechef.com/problems/FLOW004)

- **Difficulty Rating**: 461
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Given an integer $N$, we need to find the sum of its first and last digits. The problem usually provides a number of test cases $T$, followed by $T$ integers.

---

## Intuition & Mathematical Observation
Instead of using mathematical operations (like repeatedly dividing by 10 to find the last digit, and using logarithms or loops to find the first digit), we can treat the input number as a **string**. 

- The **first digit** of the number corresponds to the character at the very beginning of the string (index `0`).
- The **last digit** corresponds to the character at the very end of the string (`s.back()` or `s[s.length() - 1]`).

By subtracting the ASCII value of `'0'` from these characters, we convert them into their respective integer values and output their sum.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(D)$ per test case, where $D$ is the number of digits in $N$. Since $N$ typically fits within standard integer limits (e.g., up to $10^6$ or similar constraints in basic CodeChef problems), $D$ is a small constant (at most $\approx 10$). Thus, the time complexity per testcase is $\mathcal{O}(1)$. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(D)$ to store the number as a string, which effectively operates in $\mathcal{O}(1)$ auxiliary space.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to solve an individual testcase
void solve_case() {
    string s;
    cin >> s;
    
    // The first digit is at index 0, and the last digit is at the last index
    int first_digit = s[0] - '0';
    int last_digit = s.back() - '0';
    
    cout << first_digit + last_digit << "\n";
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