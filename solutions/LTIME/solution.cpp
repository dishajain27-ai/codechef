#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        
        // Use a frequency map/counter approach to check valid lunchtime hours (1 to 4 inclusive)
        map<int, bool> lunchtime_map;
        for (int i = 1; i <= 4; i++) {
            lunchtime_map[i] = true;
        }

        // Check if the current time X is a valid lunchtime
        if (lunchtime_map[x]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}