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

        // Chef can pay if the money he has (X) is greater than or equal to the bill (Y)
        if (x >= y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}