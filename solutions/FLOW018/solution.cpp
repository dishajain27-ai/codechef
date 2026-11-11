#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Use long long because 20! exceeds the capacity of a standard 32-bit integer
        long long factorial = 1;
        
        // Calculate factorial iteratively
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << factorial << "\n";
    }

    return 0;
}