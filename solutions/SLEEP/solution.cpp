#include <bits/stdc++.h>
using namespace std;

// Helper function to determine if Chef is sleep deprived for a single test case
void solve_case() {
    int x;
    cin >> x;
    
    // A person is sleep deprived if they slept strictly less than 7 hours
    if (x < 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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