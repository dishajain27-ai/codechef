#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        // Calculate the number of subscriptions needed. 
        // Each subscription can cover up to 6 people. 
        // Using integer division with rounding up: (n + 5) / 6
        int subscriptions = (n + 5) / 6;

        // Total cost is the number of subscriptions multiplied by the cost per subscription
        long long total_cost = (long long)subscriptions * x;

        cout << total_cost << "\n";
    }

    return 0;
}