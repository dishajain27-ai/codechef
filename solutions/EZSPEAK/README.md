# [Easy Pronunciation (EZSPEAK)](https://www.codechef.com/problems/EZSPEAK)

- **Difficulty Rating**: 1000
- **Solved in**: 1 attempt(s)

---

## Problem Summary
The problem asks us to determine whether a given word is "easy" or "hard" to pronounce. A word is considered **hard** to pronounce if it contains **4 or more consecutive consonants**. Otherwise, it is considered **easy** to pronounce. 

Vowels are defined as the characters `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`, and all other lowercase English alphabets are considered consonants.

For each test case, we are given the length of the string and the string itself, and we need to output `"YES"` if it is easy to pronounce (consecutive consonants < 4) and `"NO"` if it is hard to pronounce (consecutive consonants $\ge$ 4).

---

## Intuition & Mathematical Observation
To solve this problem efficiently, we can iterate through the string character by character while keeping track of the current streak of consecutive consonants:
1. We define a helper function to check if a character is a vowel.
2. We maintain a counter `consecutive_consonants` initialized to $0$.
3. As we traverse the string:
   - If the current character is a **consonant**, we increment our counter. If the counter reaches $4$, we immediately know the word is hard to pronounce, so we can flag it and break out of the loop early.
   - If the current character is a **vowel**, the streak of consecutive consonants is broken, so we reset the counter back to $0$.
4. Finally, based on our flag, we print `"YES"` or `"NO"`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(N)$ per test case, where $N$ is the length of the string. We iterate through the string of length $N$ at most once.
- **Space Complexity**: $\mathcal{O}(N)$ to store the string $s$ (or $\mathcal{O}(1)$ auxiliary space if we disregard the input storage).

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Helper function to check if a character is a vowel
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Two-pointer / sliding window approach to find consecutive consonants
    int consecutive_consonants = 0;
    bool hard_to_pronounce = false;

    for (int i = 0; i < n; ++i) {
        if (!isVowel(s[i])) {
            consecutive_consonants++;
            if (consecutive_consonants >= 4) {
                hard_to_pronounce = true;
                break;
            }
        } else {
            // Reset the count if we encounter a vowel
            consecutive_consonants = 0;
        }
    }

    if (hard_to_pronounce) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
```