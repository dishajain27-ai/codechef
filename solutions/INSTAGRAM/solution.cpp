#include <bits/stdc++.h>
using namespace std;

// Helper function to determine if the account is spam
void solve_case() {
    long long x, y;
    cin >> x >> y;
    
    // An account is spam if following (X) > 10 * followers (Y)
    if (x > 10 * y) {
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