#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        double a, b, c;
        cin >> a >> b >> c;

        // Calculate average and check if it's strictly greater than C
        double avg = (a + b) / 2.0;
        if (avg > c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}