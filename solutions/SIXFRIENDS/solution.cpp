#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Cost for 3 double rooms
        int cost_double = 3 * x;
        // Cost for 2 triple rooms
        int cost_triple = 2 * y;

        // Find and print the minimum of the two accommodation options
        cout << min(cost_double, cost_triple) << "\n";
    }

    return 0;
}