#include <iostream>

using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    // 4 days of X hours each, and 1 day of Y hours
    int total_hours = (4 * x) + y;
    cout << total_hours << "\n";
}

int main() {
    // Optimize input/output operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}