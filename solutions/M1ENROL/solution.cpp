#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        // If interested students (y) exceed available seats (x), we need the difference.
        // Otherwise, no extra seats are needed (0).
        if (y > x) {
            cout << y - x << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}