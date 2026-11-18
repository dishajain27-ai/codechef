#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x, p;
        cin >> n >> x >> p;

        // Calculate score: 3 marks for correct (x), -1 for incorrect (n - x)
        int score = (x * 3) - (n - x);

        // Check if score meets or exceeds the passing criteria
        if (score >= p) {
            cout << "PASS\n";
        } else {
            cout << "FAIL\n";
        }
    }

    return 0;
}