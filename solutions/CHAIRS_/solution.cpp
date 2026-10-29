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

        // If there are more students than chairs, we need to buy the difference.
        // Otherwise, we need 0 extra chairs.
        if (x > y) {
            cout << x - y << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}