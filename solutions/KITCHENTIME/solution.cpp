#include <bits/stdc++.h>
using namespace std;

// Helper function to solve a single test case
void solve_case() {
    int x, y;
    cin >> x >> y;
    // The number of working hours is simply the difference between ending time Y and starting time X
    cout << (y - x) << "\n";
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