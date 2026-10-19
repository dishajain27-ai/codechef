#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    int x, y;
    cin >> x >> y;
    
    // Compare the prices of the two cab services
    if (x < y) {
        cout << "FIRST\n";
    } else if (y < x) {
        cout << "SECOND\n";
    } else {
        cout << "ANY\n";
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