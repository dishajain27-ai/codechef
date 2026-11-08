# [Exams (EXAMCHEF)](https://www.codechef.com/problems/EXAMCHEF)

- **Difficulty Rating**: 519
- **Solved in**: 2 attempt(s)

---

## Problem Summary
In a university, there are $X$ halls, and each hall contains $Y$ students. Therefore, the total number of students appearing for an exam is $X \times Y$. 

We are given that $Z$ students passed the exam. We need to determine if **strictly more than 50%** of the total students passed the exam. Output `"YES"` if the condition is met, and `"NO"` otherwise.

---

## Intuition & Mathematical Observation
1. First, calculate the total number of students: 
   $$\text{Total Students} = X \times Y$$
2. We need to check if the number of passing students ($Z$) is strictly greater than half of the total students:
   $$Z > \frac{\text{Total Students}}{2}$$
3. To avoid precision issues with floating-point division, we can cross-multiply the inequality:
   $$2 \times Z > \text{Total Students}$$
   $$2 \times Z > X \times Y$$
4. Since $X$, $Y$, and $Z$ can potentially be large enough, we use `long long` data types to prevent integer overflow.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, as it only involves basic arithmetic operations and comparisons. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ because we only use a few variables to store the inputs.

---

## Solution Code

```cpp
#include <iostream>

using namespace std;

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Total number of students
        long long total_students = x * y;
        
        // Check if strictly greater than 50%
        // z > total_students / 2 is equivalent to 2 * z > total_students
        if (2 * z > total_students) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
```