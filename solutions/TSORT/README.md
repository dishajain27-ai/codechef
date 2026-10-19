# [Simple Sorting (TSORT)](https://www.codechef.com/problems/TSORT)

- **Difficulty Rating**: 667
- **Solved in**: 1 attempt(s)

## Problem Summary
The problem asks us to take a list of numbers as input and output them in non-decreasing (ascending) order. The input typically consists of a total count of numbers $N$, followed by $N$ integers. 

## Intuition & Mathematical Observation
A standard comparison-based sorting algorithm (like `std::sort` in C++) has a time complexity of $O(N \log N)$. However, looking at the constraints for this problem, the numbers to be sorted fall within a very small, well-defined range (typically between $0$ and $10^6$). 

Instead of comparing elements against each other, we can use a **Counting Sort** (or frequency array) approach:
1. We initialize a frequency array of size $1,000,001$ with all zeros.
2. As we read each input number, we increment its corresponding count in the frequency array.
3. After reading all inputs, we iterate through the frequency array from $0$ up to $10^6$. For each number, we print it as many times as its frequency count dictates.

This approach bypasses comparison sorting entirely, achieving linear time complexity relative to the value range and number of elements. Combined with fast I/O, it easily passes within the time limits.

## Complexity Analysis

- **Time Complexity**: $O(N + M)$ where $N$ is the number of elements and $M$ is the maximum possible value of the elements ($10^6$). Reading the input takes $O(N)$ and printing the sorted output takes $O(N + M)$ operations in total.
- **Space Complexity**: $O(M)$ to store the frequency array of size $1,000,001$, which uses a constant and minimal amount of memory.

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // Since the maximum value of elements is bounded by 10^6, 
    // counting sort (or frequency array) is extremely efficient here.
    vector<int> freq(1000001, 0);

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        freq[val]++;
    }

    // Output the sorted elements
    for (int i = 0; i <= 1000000; i++) {
        while (freq[i] > 0) {
            cout << i << "\n";
            freq[i]--;
        }
    }

    return 0;
}
```