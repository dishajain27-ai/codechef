# [Find maximum in an Array (UWCOI20A)](https://www.codechef.com/problems/UWCOI20A)

- **Difficulty Rating**: 650
- **Solved in**: 1 attempt(s)

---

## Problem Summary
Given an array of $N$ integers representing mountain heights, we need to find and output the maximum height present in the array for each test case.

---

## Intuition & Mathematical Observation
The problem asks us to find the maximum element in a given array of numbers. While we can simply keep track of the maximum value using a single variable while iterating through the input, we can also utilize ordered containers like `std::map`. 

By inserting all elements into a `std::map<long long, int>`, the keys are automatically sorted in ascending order. The maximum element will naturally reside at the very end of the map, which can be easily accessed in logarithmic time using a reverse iterator (`rbegin()`).

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(N \log N)$ per test case, where $N$ is the number of elements in the array. Inserting each element into the `std::map` takes $\mathcal{O}(\log N)$ time, and we do this $N$ times. *(Note: This can be optimized to $\mathcal{O}(N)$ by simply maintaining a running maximum during the input loop, but the map approach is well within the time limits for $N \le 10^5$.)*
- **Space Complexity**: $\mathcal{O}(N)$ per test case to store the elements and their frequencies in the `std::map`.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        // Using a map to store the frequencies of mountain heights, 
        // which naturally keeps keys sorted and allows easy maximum retrieval.
        map<long long, int> heightFreq;
        
        for (int i = 0; i < n; i++) {
            long long h;
            cin >> h;
            heightFreq[h]++;
        }
        
        // The maximum element will be the last key in the map
        if (!heightFreq.empty()) {
            auto maxElement = heightFreq.rbegin();
            cout << maxElement->first << "\n";
        }
    }

    return 0;
}
```