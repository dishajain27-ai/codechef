#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        // Check if the sum of a and b equals c
        if (a + b == c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}