#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        // The amount they donate is the difference between Chefina's and Chef's income
        cout << (y - x) << "\n";
    }

    return 0;
}