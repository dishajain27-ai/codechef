#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        // The maximum extra water is the total capacity minus the current water
        cout << k - x << "\n";
    }

    return 0;
}