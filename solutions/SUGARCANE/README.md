# [Sugarcane Juice Business (SUGARCANE)](https://www.codechef.com/problems/SUGARCANE)

- **Difficulty Rating**: 563
- **Solved in**: 1 attempt(s)

---

## Problem Summary

A person runs a sugarcane juice business. Each glass of sugarcane juice is sold for **50 coins**. 

The running expenses are distributed as follows from the total income:
- **20%** of the total income is spent on buying sugarcane.
- **20%** of the total income is spent on salt and mint.
- **30%** of the total income is spent on shop rent.

Given the number of glasses of sugarcane juice sold ($N$) in a day, we need to calculate the **net profit** earned at the end of the day.

---

## Intuition & Mathematical Observation

1. **Calculate Total Income**: 
   Since each glass is sold for 50 coins and $N$ glasses are sold, the total income is:
   $$\text{Total Income} = 50 \times N$$

2. **Calculate Total Expenses**: 
   The expenses account for $20\% + 20\% + 30\% = 70\%$ of the total income. 
   $$\text{Total Expenses} = (0.20 + 0.20 + 0.30) \times \text{Total Income} = 0.70 \times \text{Total Income}$$
   Alternatively, we can compute each expense individually and sum them up, which avoids floating-point precision issues when done using integer arithmetic:
   $$\text{Total Expenses} = \left(\frac{20 \times \text{Income}}{100}\right) + \left(\frac{20 \times \text{Income}}{100}\right) + \left(\frac{30 \times \text{Income}}{100}\right)$$

3. **Calculate Profit**: 
   $$\text{Profit} = \text{Total Income} - \text{Total Expenses}$$
   Since expenses take up 70% of the income, the profit is simply the remaining $30\%$ of the total income ($\text{Income} - 0.70 \times \text{Income} = 0.30 \times \text{Income}$).

---

## Complexity Analysis

- **Time Complexity**: $\mathcal{O}(1)$ per test case, as the solution uses a constant number of arithmetic operations. For $T$ test cases, the total time complexity is $\mathcal{O}(T)$.
- **Space Complexity**: $\mathcal{O}(1)$ auxiliary space, since only a few variables are used to store the income, expenses, and profit.

---

## Solution Code

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to solve a single test case
void solve_case() {
    long long n;
    cin >> n;
    
    // Total income from selling N glasses at 50 coins each
    long long total_income = 50 * n;
    
    // Expenses: 20% on sugarcane, 20% on salt/mint, 30% on rent
    // Total expenses = 20% + 20% + 30% = 70% of total income
    long long total_expense = (20 * total_income / 100) + 
                              (20 * total_income / 100) + 
                              (30 * total_income / 100);
                              
    // Profit = Total Income - Total Expenses
    long long profit = total_income - total_expense;
    
    cout << profit << "\n";
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