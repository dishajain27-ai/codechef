#include <bits/stdc++.h>
using namespace std;

// Helper function to check if Chef can read all pages
void solve_case() {
    int n, x, y;
    cin >> n >> x >> y;
    
    // Maximum pages Chef can read in y days
    if (x * y >= n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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