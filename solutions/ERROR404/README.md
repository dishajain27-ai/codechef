# [404 Not Found (ERROR404)](https://www.codechef.com/problems/ERROR404)

- **Difficulty Rating**: 267
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem gives us an HTTP response code $X$ and asks us to determine whether the requested resource was found or not. 
- If the response code is equal to `404`, it represents the standard HTTP "Not Found" error, and we should output `NOT FOUND`.
- For any other response code, we should output `FOUND`.

## Intuition & Mathematical Observation
This is a straightforward conditional logic problem. We simply need to read the integer input $X$ and compare it directly against the value `404`. 
- If $X == 404$, print `NOT FOUND`.
- Otherwise, print `FOUND`.

## Complexity Analysis
- **Time Complexity**: $\mathcal{O}(1)$ since the solution only performs a single integer comparison and prints the corresponding string.
- **Space Complexity**: $\mathcal{O}(1)$ as no additional data structures or memory are used beyond a single integer variable.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to solve a single test case
void solve_case() {
    int x;
    cin >> x;
    
    // Check if the response code is 404
    if (x == 404) {
        cout << "NOT FOUND\n";
    } else {
        cout << "FOUND\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // The problem implies a single test case based on the input format,
    // but using a standard template for robust handling.
    solve_case();
    
    return 0;
}
```