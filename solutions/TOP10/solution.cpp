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
        
        // Chef makes it to the top 10 if his rank X is less than or equal to 10
        if (x <= 10) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}