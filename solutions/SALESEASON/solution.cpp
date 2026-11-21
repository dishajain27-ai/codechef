#include <bits/stdc++.h>
using namespace std;

// Helper function to calculate the final discounted price
void solve_case() {
    int x;
    cin >> x;
    
    int discount = 0;
    if (x <= 100) {
        discount = 0;
    } else if (x <= 1000) {
        discount = 25;
    } else if (x <= 5000) {
        discount = 100;
    } else {
        discount = 500;
    }
    
    cout << x - discount << "\n";
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