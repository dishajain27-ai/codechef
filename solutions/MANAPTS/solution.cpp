#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Maximum number of attacks is simply the integer division of total mana by cost
        cout << y / x << "\n";
    }

    return 0;
}