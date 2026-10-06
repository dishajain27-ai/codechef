#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    long long x, y;
    cin >> x >> y;
    // Maximum customers = stoves * minutes
    cout << x * y << "\n";
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // This problem has a single testcase per file, but we structure it correctly.
    solve_case();
    
    return 0;
}