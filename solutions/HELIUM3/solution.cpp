#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        // Total power needed vs total power available
        if (x * y >= a * b) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}