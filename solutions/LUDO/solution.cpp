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
        // Chef can enter a new token only if he rolls a 6
        if (x == 6) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}