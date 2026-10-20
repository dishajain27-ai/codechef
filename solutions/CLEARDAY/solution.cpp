#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y;
    if (cin >> x >> y) {
        // A week has 7 days in total
        int clear_days = 7 - (x + y);
        cout << clear_days << "\n";
    }
    
    return 0;
}