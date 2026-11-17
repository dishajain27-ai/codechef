#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        // Chef must finish watching the 24-minute episode strictly before the exam starts.
        // Therefore, available time X must be strictly greater than 24.
        if (x > 24) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}