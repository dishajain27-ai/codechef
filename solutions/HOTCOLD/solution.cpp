#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int c;
        cin >> c;

        // Climate is HOT if temperature is strictly above 20, otherwise COLD
        if (c > 20) {
            cout << "HOT\n";
        } else {
            cout << "COLD\n";
        }
    }

    return 0;
}