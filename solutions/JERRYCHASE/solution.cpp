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

        // Tom can catch Jerry only if Tom's speed is strictly greater than Jerry's speed
        if (y > x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}