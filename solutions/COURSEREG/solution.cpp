#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        // Total students after our friends register must be <= maximum capacity M
        // i.e., k + n <= m
        if (k + n <= m) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}