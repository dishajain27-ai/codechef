#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        // Minimum button presses is the absolute difference between X and Y
        cout << abs(x - y) << "\n";
    }

    return 0;
}