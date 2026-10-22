# [Problems in your to-do list (TODOLIST)](https://www.codechef.com/problems/TODOLIST)
- **Difficulty Rating**: 580
- **Solved in**: 2 attempt(s)

---

## Problem Summary
Chef has a to-do list containing $N$ problems, each with a specific difficulty rating. Chef wants to clean up his list by removing the problems that are too difficult for him. Specifically, any problem with a difficulty rating of **1000 or greater** must be removed. 

Given the difficulty ratings of all $N$ problems in the to-do list, our task is to find out how many problems Chef needs to remove.

---

## Intuition & Mathematical Observation
The problem requires us to process a list of integers (representing problem difficulties) and count how many elements satisfy a specific condition: $\text{difficulty} \ge 1000$.

Since each test case provides $N$ and then the $N$ difficulty ratings, we can:
1. Initialize a counter (`remove_count`) to $0$.
2. Iterate through each of the $N$ ratings.
3. Check if the current rating is $\ge 1000$. If it is, increment our counter.
4. Output the final count for each testcase.

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(N)$ per test case, where $N$ is the number of problems in the to-do list. We iterate through the list of $N$ integers exactly once, performing constant-time $\mathcal{O}(1)$ operations for each element. For $T$ test cases, the total time complexity is $\mathcal{O}(\sum N)$, which easily runs well within the time limit.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space. We do not store the array of ratings in memory; instead, we process each rating on the fly as it is read from the input stream.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to solve an individual test case
void solve_case() {
    int n;
    cin >> n;
    
    int remove_count = 0;
    for (int i = 0; i < n; ++i) {
        int difficulty;
        cin >> difficulty;
        // Chef should remove problems with difficulty rating >= 1000
        if (difficulty >= 1000) {
            remove_count++;
        }
    }
    
    cout << remove_count << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}
```