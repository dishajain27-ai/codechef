# [Mana Points (MANAPTS)](https://www.codechef.com/problems/MANAPTS)
- **Difficulty Rating**: 327
- **Solved in**: 1 attempt(s)

---

## Problem Summary
You are playing a game where your character has a certain amount of mana. 
- Each special attack costs $X$ mana points.
- You currently have a total of $Y$ mana points.

We need to find the **maximum** number of special attacks you can perform using your available mana.

---

## Intuition & Mathematical Observation
To find out how many times you can afford an attack that costs $X$ mana when you have $Y$ mana in total, we can use basic integer division. 

Since you cannot perform a fraction of an attack, the answer is simply the greatest integer less than or equal to $\frac{Y}{X}$. In programming languages like C++, integer division (`y / x`) automatically truncates the decimal part, which directly gives us the maximum number of full attacks possible.

---

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ per test case, as the solution only requires a single division operation. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, since we only use a few variables (`x`, `y`, `t`) to store the input and output.

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
        long long x, y;
        cin >> x >> y;
        
        // Maximum number of attacks is simply the integer division of total mana by cost
        cout << y / x << "\n";
    }

    return 0;
}
```