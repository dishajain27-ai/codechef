#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        // Output the maximum of the two scores
        cout << max(x, y) << "\n";
    }
    
    return 0;
}