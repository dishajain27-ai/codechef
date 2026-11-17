#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    // We can use a frequency map to cache results of identical queries if needed,
    // but a direct calculation is also very efficient. Here we incorporate a map 
    // to track coin earnings to demonstrate the frequency caching approach.
    map<pair<int, int>, int> bagCache;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        pair<int, int> query = {x, y};
        
        // Check if this query has already been processed and cached
        if (bagCache.find(query) != bagCache.end()) {
            cout << bagCache[query] << "\n";
            continue;
        }
        
        // Calculate total coins earned
        int totalCoins = x * y;
        
        // Each bag costs 100 CRED coins
        int maxBags = totalCoins / 100;
        
        // Cache the result
        bagCache[query] = maxBags;
        
        cout << maxBags << "\n";
    }
    
    return 0;
}