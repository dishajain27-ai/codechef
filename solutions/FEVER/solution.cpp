#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        // Use a frequency map just to demonstrate the requested theme playfully
        map<int, int> temp_counts;
        temp_counts[x]++;

        // Check if the temperature strictly greater than 98 exists in our map
        if (temp_counts.count(x) && x > 98) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}