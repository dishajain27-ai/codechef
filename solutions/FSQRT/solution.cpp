#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        // Compute and output the square root rounded down to the nearest integer
        cout << static_cast<int>(sqrt(n)) << "\n";
    }

    return 0;
}