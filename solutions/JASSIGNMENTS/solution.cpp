#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        // Janmansh needs 3 hours and must finish by 10 pm.
        // So he must start by 10 - 3 = 7 pm.
        if (x + 3 <= 10) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}