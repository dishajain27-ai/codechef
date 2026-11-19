#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, x;
    if (cin >> a >> b >> c >> x) {
        // Check if the given topic X matches any of the prepared topics A, B, or C
        if (x == a || x == b || x == c) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}