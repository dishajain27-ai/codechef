#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        // Chef walks to office and back home: 2 * x kilometers per day.
        // Office is open 5 days a week: total distance = (2 * x) * 5 = 10 * x.
        long long total_distance = 10 * x;

        cout << total_distance << "\n";
    }

    return 0;
}