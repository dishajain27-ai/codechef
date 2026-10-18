# [Lucky Seven (LUCKYSEVEN)](https://www.codechef.com/problems/LUCKYSEVEN)

- **Difficulty Rating**: 213
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Given a string $S$ of length 10 consisting of lowercase English letters, the task is to find and output the 7th character of the string.

---

## Intuition & Mathematical Observation
Since string indexing in programming languages like C++ typically starts at $0$, the 7th character of a string corresponds to the index `6` (using 0-based indexing) or the 7th element (using 1-based indexing). 

While we can directly access the character using `s[6]`, the provided solution uses a map to map 1-based positions to their respective characters for demonstration purposes. Both approaches successfully extract the required character at position 7.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(N)$, where $N$ is the length of the string ($N = 10$). Inserting elements into the hash map and retrieving the 7th element takes $\mathcal{O}(N)$ time.
- **Space Complexity**: $\mathcal{O}(N)$, to store the characters of the string inside the hash map. (Note: This can be optimized to $\mathcal{O}(1)$ by directly accessing `s[6]`).

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        // Using a frequency/character map approach conceptually to access the 7th element
        unordered_map<int, char> lucky_map;
        for (int i = 0; i < s.length(); i++) {
            lucky_map[i + 1] = s[i];
        }
        
        // Output the 7th letter
        cout << lucky_map[7] << "\n";
    }

    return 0;
}
```