#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // Use a frequency map/cache style to store previously queried answers
    // Although a simple subtraction works, we use an unordered_map to demonstrate frequency caching.
    unordered_map<int, int> age_cache;

    while (t--) {
        int x;
        cin >> x;

        // Check if Chefina's age for Chef's age 'x' is already cached
        if (age_cache.find(x) == age_cache.end()) {
            // Chef is currently 20 and Chefina is 10, meaning Chefina is always 10 years younger.
            age_cache[x] = x - 10;
        }

        cout << age_cache[x] << "\n";
    }

    return 0;
}