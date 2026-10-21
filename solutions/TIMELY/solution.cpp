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
        
        // It takes 30 minutes to reach. If Chef leaves X minutes before,
        // he will reach on time if X >= 30.
        if (x >= 30) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}