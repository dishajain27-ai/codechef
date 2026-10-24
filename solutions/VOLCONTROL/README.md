# [Volume Control (VOLCONTROL)](https://www.codechef.com/problems/VOLCONTROL)

- **Difficulty Rating**: 409
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef is watching TV and the current volume is $X$. He wants to change the volume to $Y$. In one move, Chef can either increase or decrease the volume by $1$. The objective is to find the minimum number of button presses required to reach volume $Y$ from volume $X$.

## Intuition & Mathematical Observation
Since Chef can change the volume by $1$ in either direction (up or down) per move, the minimum number of steps needed to go from $X$ to $Y$ is simply the absolute difference between the two values. 

Mathematically, the answer is given by:
$$\text{Moves} = |X - Y|$$

## Complexity Analysis
- **Time Complexity**: $O(1)$ per testcase, as it only requires a single subtraction and absolute value operation. For $T$ test cases, the total time complexity is $O(T)$.
- **Space Complexity**: $O(1)$ since only a few integer variables are used to store the input and output.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        // Minimum button presses is the absolute difference between X and Y
        cout << abs(x - y) << "\n";
    }

    return 0;
}
```