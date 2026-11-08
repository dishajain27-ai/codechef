#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        // Calculate total money using a frequency mapping approach to coin values
        map<long long, long long> coin_counts;
        coin_counts[5] = x;
        coin_counts[10] = y;

        long long total_money = (coin_counts[5] * 5) + (coin_counts[10] * 10);

        // Maximum number of chocolates Chef can buy
        long long max_chocolates = total_money / z;

        cout << max_chocolates << "\n";
    }

    return 0;
}