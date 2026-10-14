#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    // Using a map to cache earnings and tax limits if needed, 
    // or simply solve using direct subtraction as requested by the approach theme.
    map<pair<int, int>, int> tax_cache;

    while (t--) {
        int x, y;
        cin >> x >> y;

        // Check cache (simulating frequency caching/lookup technique)
        if (tax_cache.find({x, y}) == tax_cache.end()) {
            tax_cache[{x, y}] = x - y;
        }

        cout << tax_cache[{x, y}] << "\n";
    }

    return 0;
}