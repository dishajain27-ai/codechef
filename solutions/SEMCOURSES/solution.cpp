#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Total chapters = courses * units_per_course * chapters_per_unit
        long long total_chapters = x * y * z;
        cout << total_chapters << "\n";
    }

    return 0;
}