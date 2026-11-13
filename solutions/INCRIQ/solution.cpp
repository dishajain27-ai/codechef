#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    if (cin >> x) {
        // Check if Chef's IQ strictly exceeds Einstein's (170) after +7 boost
        if (x + 7 > 170) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}