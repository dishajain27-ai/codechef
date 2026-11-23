# [Chef and NextGen (HELIUM3)](https://www.codechef.com/problems/HELIUM3)
- **Difficulty Rating**: 562
- **Solved in**: 1 attempt(s)

## Problem Summary
Chef needs $A$ units of power per year for a total duration of $B$ years to fund his NextGen power project. He discovers that the Moon has $X$ grams of Helium-3, where each gram can generate $Y$ units of power. We need to determine if the available Helium-3 is sufficient to meet or exceed Chef's total power requirements.

## Intuition & Mathematical Observation
To determine if the funding project will be successful, we compare the total required power with the total available power that can be generated:

1. **Total Power Needed**: The project requires $A$ units per year for $B$ years, which amounts to:
   $$\text{Power Needed} = A \times B$$

2. **Total Power Available**: There are $X$ grams of Helium-3, each providing $Y$ units of power, yielding:
   $$\text{Power Available} = X \times Y$$

If $\text{Power Available} \ge \text{Power Needed}$ ($X \times Y \ge A \times B$), then Chef has enough power, and the answer is `"Yes"`. Otherwise, the output is `"No"`.

## Complexity Analysis
- **Time Complexity**: $O(1)$ per testcase. The check involves simple scalar arithmetic and comparison operations. For $T$ test cases, the overall time complexity is $O(T)$.
- **Space Complexity**: $O(1)$ auxiliary space, as only a few primitive variables are used to store input values.

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
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        // Total power needed vs total power available
        if (x * y >= a * b) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
```