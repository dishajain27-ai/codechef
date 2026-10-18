#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    int x;
    cin >> x;
    
    // A team qualifies if they score 12 or more points
    if (x >= 12) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Since this problem has only 1 test case per file (as typical for simple CP),
    // we just call solve_case once. If there were multiple test cases, we'd loop.
    solve_case();
    
    return 0;
}