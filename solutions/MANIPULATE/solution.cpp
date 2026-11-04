#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        // Ezio can manipulate all guards if the number of guards (y) 
        // is less than or equal to his maximum capacity (x).
        if (x >= y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}