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