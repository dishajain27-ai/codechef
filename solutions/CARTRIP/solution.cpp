#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    long long x;
    cin >> x;
    
    // Chef must pay for at least 300 kms
    long long effective_distance = max(x, 300LL);
    
    // Cost is Rs 10 per km
    cout << effective_distance * 10 << "\n";
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}