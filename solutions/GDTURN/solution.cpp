#include <bits/stdc++.h>
using namespace std;

// Function to check if the turn is good
void solve_case() {
    int x, y;
    cin >> x >> y;
    
    // A turn is good if the sum of numbers is greater than 6
    if (x + y > 6) {
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