# [Chef and Chapters (SEMCOURSES)](https://www.codechef.com/problems/SEMCOURSES)

- **Difficulty Rating**: 350
- **Solved in**: 1 attempt(s)

---

## Problem Summary

In this problem, we are given the academic workload structure for a semester and need to find the total number of chapters the Chef has to study. 

For each test case, we receive three integers:
- $X$: The number of courses the Chef is taking.
- $Y$: The number of units in each course.
- $Z$: The number of chapters in each unit.

We need to calculate and output the total number of chapters across all courses.

---

## Intuition & Mathematical Observation

To find the total number of chapters, we can use basic multiplication:
1. Each course contains $Y$ units, and there are $X$ courses in total. Therefore, the total number of units is $X \times Y$.
2. Each unit contains $Z$ chapters. Thus, multiplying the total number of units by the number of chapters per unit gives the grand total of chapters: 
   $$\text{Total Chapters} = X \times Y \times Z$$

Since the inputs fit standard integer ranges, a straightforward product of the three variables directly yields the correct answer.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case. The solution only performs a single multiplication operation. For $T$ test cases, the overall time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ as only a few variables are used to store the input and result.

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
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Total chapters = courses * units_per_course * chapters_per_unit
        long long total_chapters = x * y * z;
        cout << total_chapters << "\n";
    }

    return 0;
}
```