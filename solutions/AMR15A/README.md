# [Mahasena (AMR15A)](https://www.codechef.com/problems/AMR15A)

- **Difficulty Rating**: 533
- **Solved in**: 1 attempt(s)

## Problem Summary
Katiuszka is managing an army of soldiers, where each soldier is carrying a certain number of weapons. According to the rules of the kingdom:
- A soldier is considered **lucky** if the number of weapons they are carrying is an **even** number.
- A soldier is considered **unlucky** if the number of weapons they are carrying is an **odd** number.

The army is deemed **"READY FOR BATTLE"** if the number of lucky soldiers strictly exceeds the number of unlucky soldiers. Otherwise, the army is **"NOT READY"**. We need to determine the readiness of the army based on the weapons count of each soldier.

---

## Intuition & Mathematical Observation
The problem requires us to classify each given integer (representing the number of weapons a soldier holds) as either even or odd:
1. Initialize two counters: `even_count` and `odd_count` to $0$.
2. Iterate through the weapons count of all $n$ soldiers.
3. For each soldier, check if the weapon count modulo $2$ is equal to $0$ (`weapons % 2 == 0`). If it is, increment `even_count`; otherwise, increment `odd_count`.
4. Finally, compare the two counts:
   - If `even_count > odd_count`, output `READY FOR BATTLE`.
   - Else, output `NOT READY`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(n)$ where $n$ is the number of soldiers. We loop through the input array/stream of size $n$ exactly once, performing constant-time operations for each soldier.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space. We do not store the array of weapons; instead, we process each input on-the-fly and only maintain two counter variables.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int even_count = 0;
    int odd_count = 0;

    // Read weapons and count even and odd numbers
    for (int i = 0; i < n; ++i) {
        int weapons;
        cin >> weapons;
        if (weapons % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Army is ready if lucky (even) soldiers > unlucky (odd) soldiers
    if (even_count > odd_count) {
        cout << "READY FOR BATTLE\n";
    } else {
        cout << "NOT READY\n";
    }

    return 0;
}
```