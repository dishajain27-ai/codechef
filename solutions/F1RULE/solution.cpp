#include <bits/stdc++.h>
using namespace std;

// Helper function to check if Chef's time is within 107% of the fastest time.
// 107% of X is (X * 107) / 100.
// To avoid floating-point issues, we use integer multiplication: Y * 100 <= X * 107.
void solve_case() {
    long long x, y;
    cin >> x >> y;
    
    if (y * 100 <= x * 107) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}