#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        // If Chef already has enough candies, he needs 0 packets
        if (x >= n) {
            cout << 0 << "\n";
        } else {
            // Calculate remaining candies needed, rounded up to the nearest multiple of 4
            int rem = n - x;
            int ans = (rem + 3) / 4;
            cout << ans << "\n";
        }
    }

    return 0;
}