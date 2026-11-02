#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    // Using a frequency map just to align with the chosen approach theme (though simple math suffices)
    map<int, int> wait_records;

    while (t--) {
        int k, x;
        cin >> k >> x;

        // Total days to wait = K weeks * 7 days/week
        int total_days = k * 7;
        int remaining_days = total_days - x;

        // Store frequency of each remaining day requirement (purely illustrative for the theme)
        wait_records[remaining_days]++;

        cout << remaining_days << "\n";
    }

    return 0;
}