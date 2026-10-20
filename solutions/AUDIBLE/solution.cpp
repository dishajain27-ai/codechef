#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Check if frequency X is within the audible range [67, 45000]
        if (x >= 67 && x <= 45000) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}