#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y;
    if (cin >> x >> y) {
        // The number of un-attempted problems is the total problems minus attempted problems
        cout << x - y << "\n";
    }
    
    return 0;
}