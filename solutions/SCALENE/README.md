# [Scalene Triangle (SCALENE)](https://www.codechef.com/problems/SCALENE)

- **Difficulty Rating**: 430
- **Solved in**: 1 attempt(s)

## Problem Summary
Given the lengths of the three sides of a valid triangle ($A$, $B$, and $C$), we need to determine whether the triangle is **scalene**. 

A scalene triangle is defined as a triangle in which all three sides have different lengths (i.e., no two sides are equal).

## Intuition & Mathematical Observation
By definition, a triangle is classified as scalene if and only if all its side lengths are distinct. 
Given the three side lengths $A$, $B$, and $C$, we can directly check this condition using inequality operators:
- $A \neq B$
- $B \neq C$
- $A \neq C$

If all three conditions are simultaneously true, the triangle is scalene, and we output `YES`. Otherwise, we output `NO`. Since the problem guarantees that the input always forms a valid triangle, we do not need to check the triangle inequality theorem.

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, as the solution only performs a constant number of comparisons. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, since we only use a few variables to store the side lengths.

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
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        // A triangle is scalene if all three sides are distinct.
        if (a != b && b != c && a != c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
```