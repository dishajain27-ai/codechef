#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    // Using a map for frequency counting to follow the frequency caching approach theme
    map<int, int> battery_counts;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Record the frequency of this battery level
        battery_counts[x]++;
        
        // Determine if battery low notification is shown (<= 15)
        if (x <= 15) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}