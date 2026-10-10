#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        // Check if Chef drank at least 2000 ml of water
        if (x >= 2000) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}