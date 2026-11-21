#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, x;
        cin >> n >> m >> x;

        // Perimeter of the rectangular plate = 2 * (N + M)
        long long perimeter = 2 * (n + m);

        // Total cost = perimeter * cost per cm
        long long total_cost = perimeter * x;

        cout << total_cost << "\n";
    }

    return 0;
}