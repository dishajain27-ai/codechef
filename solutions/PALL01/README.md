# [The Block Game (PALL01)](https://www.codechef.com/problems/PALL01)
- **Difficulty Rating**: 720
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem asks us to determine whether a given integer is a **palindrome**. A palindromic number reads the same forwards and backwards (e.g., $121$, $555$, $343$). If the number is a palindrome, we need to output `wins`; otherwise, we output `loses`. This process is repeated for $T$ test cases.

## Intuition & Mathematical Observation
Since numbers are given as inputs, we can easily treat them as strings. A string is a palindrome if its characters from the beginning match the characters from the end in reverse order. 

We can use a **two-pointer approach**:
1. Place one pointer (`left`) at the beginning of the string (index $0$).
2. Place another pointer (`right`) at the end of the string (index $N - 1$, where $N$ is the length of the string).
3. Compare the characters at both pointers. If they are equal, move `left` forward and `right` backward.
4. If they ever differ, the string is not a palindrome.
5. If the pointers cross without any mismatch, the string is a palindrome.

Alternatively, since the constraints on the integer values are usually small for this rating, reversing the number numerically is also an option, but the string-based approach is extremely clean and avoids potential integer overflow issues.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(L)$ per test case, where $L$ is the number of digits in the integer. Since we iterate through the string with two pointers meeting in the middle, each character is visited at most once.
- **Space Complexity**: $\mathcal{O}(L)$ to store the input number as a string.

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
        string s;
        cin >> s;

        // Use two-pointer approach to check if the string is a palindrome
        int left = 0;
        int right = s.length() - 1;
        bool is_palindrome = true;

        while (left < right) {
            if (s[left] != s[right]) {
                is_palindrome = false;
                break;
            }
            left++;
            right--;
        }

        if (is_palindrome) {
            cout << "wins\n";
        } else {
            cout << "loses\n";
        }
    }

    return 0;
}
```