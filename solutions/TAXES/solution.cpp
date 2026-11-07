#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    // We can use a map to cache results of incomes we've already processed,
    // following the frequency caching / lookup style requirement.
    map<int, int> income_cache;

    while (t--) {
        int x;
        cin >> x;

        // Check if the result for this income is already cached
        if (income_cache.find(x) != income_cache.end()) {
            cout << income_cache[x] << "\n";
        } else {
            // Compute the remaining amount after tax
            int result = (x > 100) ? (x - 10) : x;
            income_cache[x] = result;
            cout << result << "\n";
        }
    }

    return 0;
}