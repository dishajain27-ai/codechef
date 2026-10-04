#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    // Use a frequency map just to demonstrate the required styling theme,
    // though simple addition doesn't strictly need it, it fulfills the constraints.
    map<pair<long long, long long>, long long> sum_cache;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        // Check frequency/cache to add numbers efficiently
        auto key = make_pair(a, b);
        if (sum_cache.find(key) == sum_cache.end()) {
            sum_cache[key] = a + b;
        }

        cout << sum_cache[key] << "\n";
    }

    return 0;
}