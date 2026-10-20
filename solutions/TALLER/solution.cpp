#include <bits/stdc++.h>
using namespace std;

// Helper function to solve an individual test case
void solve_case() {
    int x, y;
    cin >> x >> y;
    
    // Compare heights and output 'A' if Alice is taller, otherwise 'B'
    if (x > y) {
        cout << "A\n";
    } else {
        cout << "B\n";
    }
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