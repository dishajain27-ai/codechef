# [Wordle (WORDLE)](https://www.codechef.com/problems/WORDLE)

- **Difficulty Rating**: 804
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem is inspired by the popular word game *Wordle*. We are given two strings of length 5:
1. A hidden target word $S$.
2. A guessed word $G$.

Our task is to output a result string $M$ of length 5, also consisting of the characters `'G'` (Green) and `'B'` (Black), such that for each index $i$ (from $0$ to $4$):
- $M[i] = \text{'G'}$ if the character in the guess matches the hidden word at the same position ($S[i] == G[i]$).
- $M[i] = \text{'B'}$ if they do not match ($S[i] \neq G[i]$).

We need to process $T$ independent test cases.

---

## Intuition & Mathematical Observation
Since Wordle's positional feedback only requires a direct character-by-character comparison at identical indices, we do not need to worry about character counts or misplaced letters (Yellow cues). 

We can simply iterate through both strings from index $0$ to $4$:
- Compare $S[i]$ and $G[i]$.
- Append `'G'` to our answer string if they are equal, and `'B'` otherwise.

Because the string length is always fixed at $5$, the comparison for each testcase takes constant time.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase, since the strings are always of fixed length $5$. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space used to store the strings and the result of length $5$.

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
        string s, g;
        cin >> s >> g;

        string m = "";
        // Compare each character of the hidden word and the guess word
        for (int i = 0; i < 5; i++) {
            if (s[i] == g[i]) {
                m += 'G';
            } else {
                m += 'B';
            }
        }

        cout << m << "\n";
    }

    return 0;
}
```