#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        // To maximize the remainder when dividing N by A, 
        // the optimal choice for package size A is (N / 2) + 1.
        // For N = 2, N / 2 + 1 = 2.
        cout << (n / 2) + 1 << "\n";
    }

    return 0;
}