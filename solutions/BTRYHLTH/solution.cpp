#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        // Battery health >= 80 is considered optimal
        if (x >= 80) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}