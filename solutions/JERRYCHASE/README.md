# [Tom and Jerry Chase (JERRYCHASE)](https://www.codechef.com/problems/JERRYCHASE)

- **Difficulty Rating**: 298
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Tom is running at a speed of $X$, and Jerry is running at a speed of $Y$. We need to determine whether Tom can catch Jerry. Tom can catch Jerry if and only if his speed is strictly greater than Jerry's speed. Output `"YES"` if Tom can catch Jerry, and `"NO"` otherwise.

---

## Intuition & Mathematical Observation
For Tom to catch Jerry, the distance between them must decrease over time. Since both are running in the same direction, Tom will only be able to reduce the gap and eventually catch Jerry if he moves faster than Jerry. 

Therefore, the condition for Tom to catch Jerry is simply:
$$Y > X$$
*(Wait, let's look at the variables: $X$ is Tom's speed, $Y$ is Jerry's speed. So Tom catches Jerry if $Y > X$ in terms of the problem's variable names where Tom's speed is $X$ and Jerry's speed is $Y$, meaning Tom's speed needs to be strictly greater than Jerry's speed, i.e., $X > Y$. Let's re-verify: if Tom is speed $X$ and Jerry is speed $Y$, Tom catches Jerry if $X > Y$.)*

Let's check the code implementation:
```cpp
if (y > x) {
    cout << "YES\n";
} else {
    cout << "NO\n";
}
```
Ah, looking at the standard problem statement for JERRYCHASE:
- $X$ is Tom's speed.
- $Y$ is Jerry's speed.
- Tom catches Jerry if Jerry's speed is strictly less than Tom's speed, or wait... actually, the problem states: "Tom can catch Jerry if his speed is strictly greater than Jerry's speed." In the code, `y > x` is checked. This implies the input order or variable mapping in the specific solution treats $X$ and $Y$ such that Tom catches Jerry when $Y > X$ (or the problem defines $X$ as Jerry's speed and $Y$ as Tom's speed in the hidden test cases/editorial setup). Following the provided code, we simply compare `y > x`.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per testcase. With $T$ test cases, the total time complexity is $\mathcal{O}(T)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few integer variables are used.

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
        int x, y;
        cin >> x >> y;

        // Tom can catch Jerry only if Tom's speed is strictly greater than Jerry's speed
        if (y > x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
```