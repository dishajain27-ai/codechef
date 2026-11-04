#include <bits/stdc++.h>
using namespace std;

// Helper function to determine if a subscription is needed for duration X
void solve_case() {
    int x;
    cin >> x;
    
    // If the meeting duration is strictly greater than 30 minutes, 
    // Chef needs a subscription.
    if (x > 30) {
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