#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        // Chef needs N passes for his friends and 1 pass for himself.
        // Total passes needed = N + 1.
        // He can enter if he has at least N + 1 passes (K > N).
        if (k > n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}